package com.example.petya.entity;

import java.util.Objects;

// класс, представляющий результат
public class Result {
    private int position;               // позиция
    private int maxPosition;            // максимальная позиция

    public Result(int position, int maxPosition) {
        this.position = position;
        this.maxPosition = maxPosition;
    }

    public int getPosition() {
        return position;
    }

    public void setPosition(int position) {
        this.position = position;
    }

    public int getMaxPosition() {
        return maxPosition;
    }

    public void setMaxPosition(int maxPosition) {
        this.maxPosition = maxPosition;
    }

    @Override
    public boolean equals(Object o) {
        if (this == o) return true;
        if (o == null || getClass() != o.getClass()) return false;
        Result result = (Result) o;
        return position == result.position && maxPosition == result.maxPosition;
    }

    @Override
    public int hashCode() {
        return Objects.hash(position, maxPosition);
    }
}
