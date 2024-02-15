package com.example.petya.entity;

import com.example.petya.validator.ErrorList;

import java.util.HashMap;
import java.util.Map;

// результат bulk-запроса
public class BulkResult {
    private Map<Integer, Result> results = new HashMap<>();     // хранилище входных и выходных значений
    private ErrorList errors = new ErrorList();                 // все ошибки валидации
    private double middlePosition;                              // средняя позиция
    private int minPosition;                                    // минмальная позиция
    private int maxPosition;                                    // максимальная позиция

    public BulkResult(Map<Integer, Result> results, ErrorList errors){
        this.results = results;
        this.errors = errors;
    }

    public Map<Integer, Result> getResults() {
        return results;
    }

    public ErrorList getErrors() {
        return errors;
    }

    public double getMiddlePosition() {
        return middlePosition;
    }

    public void setMiddlePosition(double middlePosition) {
        this.middlePosition = middlePosition;
    }

    public int getMinPosition() {
        return minPosition;
    }

    public void setMinPosition(int minPosition) {
        this.minPosition = minPosition;
    }

    public int getMaxPosition() {
        return maxPosition;
    }

    public void setMaxPosition(int maxPosition) {
        this.maxPosition = maxPosition;
    }
}
