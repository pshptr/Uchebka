package com.example.petya.entity;

import java.util.Objects;

// класс, хранящий счетчики
public class Counters {
    private Integer syncCounter;        // синхронизированный счетчик
    private Integer unsyncCounter;      // несинхронизированный счетчик

    public Counters(Integer syncCounter, Integer unsyncCounter) {
        this.syncCounter = syncCounter;
        this.unsyncCounter = unsyncCounter;
    }

    public int getSyncCounter() {
        return syncCounter;
    }

    public void setSyncCounter(Integer syncCounter) {
        this.syncCounter = syncCounter;
    }

    public int getUnsyncCounter() {
        return unsyncCounter;
    }

    public void setUnsyncCounter(Integer unsyncCounter) {
        this.unsyncCounter = unsyncCounter;
    }

    @Override
    public boolean equals(Object o) {
        if (this == o) return true;
        if (o == null || getClass() != o.getClass()) return false;
        Counters counters = (Counters) o;
        return Objects.equals(syncCounter, counters.syncCounter) && Objects.equals(unsyncCounter, counters.unsyncCounter);
    }

    @Override
    public int hashCode() {
        return Objects.hash(syncCounter, unsyncCounter);
    }
}
