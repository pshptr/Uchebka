package com.example.petya.memory;

import com.example.petya.entity.Result;
import org.springframework.stereotype.Component;

import java.util.HashMap;
import java.util.Map;

// кэш
@Component
public class InMemoryStorage {
    private Map<Integer, Result> data = new HashMap<>();        // ханилище входных и выходных параметров
    public void save(int steps, Result result){                 // сохранение в кэш
        data.put(steps, result);
    }

    public int size() {                                         // получение размера кэша
        return data.size();
    }

    public Map<Integer, Result> getMemory(){                    // получение кэша
        return data;
    }
}

