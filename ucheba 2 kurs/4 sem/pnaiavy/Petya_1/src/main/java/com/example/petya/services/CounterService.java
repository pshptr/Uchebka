package com.example.petya.services;

import com.example.petya.entity.Counters;
import org.springframework.stereotype.Service;

// сервис для счетчиков
@Service
public class CounterService {
    private Integer syncCounter = Integer.valueOf(0);           // синхронизированный счетчик
    private Integer unsyncCounters = Integer.valueOf(0);        // несинхронизированный счетчик

    public synchronized void incrementSync(){
        syncCounter++;
    }   // увеличение синхр. счетчика

    public void incrementUnsync(){
        unsyncCounters++;
    }           // увеличение несинхр. счетчика

    // сброс счетчиков
    public void resetCounters(){
        syncCounter = unsyncCounters = Integer.valueOf(0);
    }

    // получение счетчиков
    public Counters getCounters(){
        return new Counters(syncCounter, unsyncCounters);
    }
}
