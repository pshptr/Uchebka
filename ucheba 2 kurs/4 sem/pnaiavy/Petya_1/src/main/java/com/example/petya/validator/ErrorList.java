package com.example.petya.validator;

import java.util.ArrayList;
import java.util.List;

// класс, хранящий ошибки валидации
public class ErrorList {
    private List<String> errors;                                            //список ошибок
    public ErrorList(){
        errors = new ArrayList<String>();
    }

    public List<String> getErrors(){
        return errors;
    }                     // получение ошибок

    public void add(String error){
        errors.add(error);
    }                   //добавление сообщения об ошибке

    public void add(Exception error){
        errors.add(error.getMessage());
    }   //добавление сообщения об ошибке

    public void add(ErrorList errors){
        errors.getErrors().forEach(error -> this.errors.add(error));
    }

    public int size(){                                      //кол-во сообщений об ошибке
        return errors.size();
    }                             // общее количество ошибок
}
