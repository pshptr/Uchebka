package com.example.petya.services;

import com.example.petya.entity.Result;
import org.springframework.stereotype.Service;

// главный сервис
@Service
public class MainService {
    public Result getResult(int steps){                         // получить результат
        int position = 0;                                       // позиция
        int maxPosition = 0;                                    // максимальная позиция
        for(int i = 0; i < steps; i++){                         // цикл блужданий
            if(Math.random() < 0.5) position--;                     // уменьшение
            else position++;                                        // увеличение
            if(position > maxPosition) maxPosition = position;      // найдена новая максимальная позиция
        }
        return new Result(position, maxPosition);
    }
}
