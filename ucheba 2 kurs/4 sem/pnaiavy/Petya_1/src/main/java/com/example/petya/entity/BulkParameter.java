package com.example.petya.entity;

// класс входного параметра для bulk-запроса
public class BulkParameter {
    private int steps;              // значение

    public BulkParameter(){

    }

    public BulkParameter(int steps) {
        this.steps = steps;
    }

    public int getSteps() {
        return steps;
    }

    public void setSteps(int steps) {
        this.steps = steps;
    }
}
