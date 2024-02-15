package com.example.petya.services;

import com.example.petya.entity.Counters;
import org.junit.jupiter.api.Assertions;
import org.junit.jupiter.api.Test;

public class CounterServiceTest {
    private CounterService service = new CounterService();

    @Test
    public void testAll(){
        service.resetCounters();
        Assertions.assertEquals(service.getCounters(), new Counters(0, 0));

        service.incrementSync();
        service.incrementSync();
        service.incrementUnsync();
        service.incrementUnsync();
        Assertions.assertEquals(service.getCounters(), new Counters(2,2));
    }
}
