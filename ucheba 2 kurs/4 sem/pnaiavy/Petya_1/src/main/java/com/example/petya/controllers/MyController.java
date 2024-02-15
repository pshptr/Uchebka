package com.example.petya.controllers;

import com.example.petya.entity.BulkParameter;
import com.example.petya.entity.BulkResult;
import com.example.petya.entity.Counters;
import com.example.petya.entity.Result;
import com.example.petya.memory.InMemoryStorage;
import com.example.petya.services.CounterService;
import com.example.petya.services.MainService;
import com.example.petya.validator.ErrorList;
import com.example.petya.validator.Validator;
import org.slf4j.Logger;
import org.slf4j.LoggerFactory;
import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.http.HttpStatus;
import org.springframework.http.ResponseEntity;
import org.springframework.web.bind.annotation.*;


import java.util.Comparator;
import java.util.HashMap;
import java.util.List;
import java.util.Map;

/*
* http://localhost:8080/getresult
* http://localhost:8080/getcash
* http://localhost:8080/getcashsize
* http://localhost:8080/resetcounters
* http://localhost:8080/getcounters
* http://localhost:8080/getresultbulk
*
* [
    {
        "steps":1
    },
    {
        "steps": -6
    },
    {
        "steps": 3
    },
    {
        "steps": 4
    }
 ]
* */



@RestController
public class MyController {
    private static Logger logger = LoggerFactory.getLogger(MyController.class);
    private MainService service;                                                // основной сервис
    private Validator validator;                                                // валидатор
    private InMemoryStorage inMemoryStorage;                                    // кэш
    private CounterService counterService;

    private Comparator<Result> comparator = new Comparator<Result>() {          // компаратор для сравнения объектов Result
        @Override
        public int compare(Result o1, Result o2) {
            return Integer.compare(o1.getPosition(), o2.getPosition());             // сравнение позиций в объектах
        }
    };

    @Autowired
    public MyController(MainService service, Validator validator,
                        InMemoryStorage inMemoryStorage, CounterService counterService){
        this.service = service;
        this.validator = validator;
        this.inMemoryStorage = inMemoryStorage;
        this.counterService = counterService;
    }

    @GetMapping("/getresult")
    @ResponseStatus(HttpStatus.OK)
    public ResponseEntity<Object> getResult(int steps){
        ErrorList errors = validator.validate(steps);                       // валидация
        if(errors.size() != 0){                                             // есть ошибки валидации
            logger.error("Validation errors");
            return new ResponseEntity(errors, HttpStatus.BAD_REQUEST);
        }

        counterService.incrementUnsync();                                   // увеличение счетчиков
        counterService.incrementSync();

        Result result = service.getResult(steps);                           // вычисление результата
        inMemoryStorage.save(steps, result);                                // сохранение в кэш
        return new ResponseEntity<>(result, HttpStatus.OK);
    }

    @PostMapping("/getresultbulk")
    @ResponseStatus(HttpStatus.OK)
    public ResponseEntity<BulkResult> getResultBulk(@RequestBody List<BulkParameter> parameters){
        Map<Integer, Result> results = new HashMap<>();                     // map результатов
        ErrorList errors = new ErrorList();                                 // общие ошибки валидации

        parameters.forEach(p -> {                                           // проход по списку параметров
            ErrorList tempErrors = validator.validate(p.getSteps());            // ошибки валидации текущего параметра
            if(tempErrors.size() == 0){                                         // если ошибок нет
                Result result = service.getResult(p.getSteps());                    // вычислить рещультат
                inMemoryStorage.save(p.getSteps(), result);                         // сохранить в кэш
                results.put(p.getSteps(), result);                                  // сохранение в map результатов
            }
            else{                                                               // ошибки есть
                for(String error : tempErrors.getErrors()){                         // добавление в общие ошибки валидации
                    errors.add(error);
                }
            }
        });

        // вычисление максимальной и минимальной позиции
        int minPosition = results.values().stream().min(comparator).get().getPosition();
        int maxPosition = results.values().stream().max(comparator).get().getPosition();

        double middlePosition = 0.0;                                        // вычисление средней позиции
        for(Result result : results.values()){                              // сложение всех позиций
            middlePosition += result.getPosition();
        }
        middlePosition /= results.size();                                   // деление на количество

        BulkResult bulkResult = new BulkResult(results, errors);            // создание результирующего объекта
        bulkResult.setMinPosition(minPosition);                             // установка минимальной позиции
        bulkResult.setMaxPosition(maxPosition);                             // установка максимальной позиции
        bulkResult.setMiddlePosition(middlePosition);                       // установка средней позиции
        return new ResponseEntity<>(bulkResult, HttpStatus.OK);
    }

    @GetMapping("/getcash")
    @ResponseStatus(HttpStatus.OK)
    public ResponseEntity<Map<Integer, Result>> getCash(){
        return new ResponseEntity<>(inMemoryStorage.getMemory(), HttpStatus.OK);    // получение кэша
    }

    @GetMapping("/getcashsize")
    @ResponseStatus(HttpStatus.OK)
    public ResponseEntity<Integer> getCashSize(){
        return new ResponseEntity<>(inMemoryStorage.size(), HttpStatus.OK);         // получение размера кэша
    }

    @GetMapping("/resetcounters")
    @ResponseStatus(HttpStatus.OK)
    public ResponseEntity<Counters> resetCounters(){
        counterService.resetCounters();                                             // сброс счетчиков
        return new ResponseEntity<>(counterService.getCounters(), HttpStatus.OK);   // получение счетчиков
    }

    @GetMapping("/getcounters")
    @ResponseStatus(HttpStatus.OK)
    public ResponseEntity<Counters> getCounters(){
        return new ResponseEntity<>(counterService.getCounters(), HttpStatus.OK);   // получение счетчиков
    }

}
