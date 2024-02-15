package com.example.petya.validator;

import com.example.petya.controllers.MyController;
import org.slf4j.Logger;
import org.slf4j.LoggerFactory;
import org.springframework.stereotype.Component;

// класс валидатора
@Component
public class Validator {
    private Logger logger = LoggerFactory.getLogger(MyController.class);
    public ErrorList validate(int steps){                       // валидирование входного числа
        ErrorList errors = new ErrorList();                     // список ошибок валидации

        if(steps < 0) {                                         // число меньше нуля
            errors.add("Steps can't be less then 0");               // + 1 ошибка
            logger.error("Steps can't be less then 0");
        }

        if(steps == 0){                                         // число равно нулю
            errors.add("Steps can't be 0");                         // + 1 ошибка
            logger.error("Steps can't be 0");
        }
        return errors;
    }
}
