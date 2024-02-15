package com.example.petya.controllers;


import com.example.petya.entity.Counters;
import com.example.petya.entity.Result;
import com.example.petya.memory.InMemoryStorage;
import com.example.petya.services.CounterService;
import com.example.petya.services.MainService;
import com.example.petya.validator.ErrorList;
import com.example.petya.validator.Validator;
import org.junit.jupiter.api.Test;
import org.junit.jupiter.api.extension.ExtendWith;
import org.mockito.InjectMocks;
import org.mockito.Mock;
import org.mockito.junit.jupiter.MockitoExtension;
import org.springframework.http.ResponseEntity;

import java.util.*;

import static org.junit.jupiter.api.Assertions.*;
import static org.mockito.Mockito.*;


@ExtendWith(MockitoExtension.class)
public class MyControllerTest {
    @Mock
    private MainService service;

    @Mock
    private Validator validator;

    @Mock
    private InMemoryStorage storage;

    @Mock
    private CounterService counterService;

    @InjectMocks
    private MyController controller = new MyController(service, validator, storage, counterService);

    @Test
    public void testGood(){
        int steps = 5;

        when(validator.validate(any(Integer.class))).thenReturn(new ErrorList());
        when(service.getResult(any(Integer.class))).thenReturn(new Result(2,3));

        ResponseEntity<Object> responseEntity = controller.getResult(steps);
        Result result = (Result)responseEntity.getBody();

        assertNotNull(result);
        assertEquals(result, new Result(2,3));
    }

    @Test
    public void testBad(){
        int steps = -1;
        ErrorList errors = new ErrorList();
        errors.add("Steps can't be 0");

        when(validator.validate(any(Integer.class))).thenReturn(errors);

        ResponseEntity<Object> responseEntity = controller.getResult(steps);
        ErrorList result = (ErrorList)responseEntity.getBody();

        assertNotNull(result);
        assertTrue(result.size() == 1);
        assertEquals(result.getErrors().get(0),"Steps can't be 0" );
    }

    @Test
    public void testGetCash(){
        Map<Integer, Result> map = new HashMap<>();
        map.put(1, new Result(2,3));
        map.put(4, new Result(5,6));
        map.put(7, new Result(8,9));

        when(storage.getMemory()).thenReturn(map);

        map = controller.getCash().getBody();
        assertNotNull(map);
        assertTrue(map.size() == 3);
        assertTrue(map.containsKey(4));
    }

    @Test
    public void testGetCashSize(){
        when(storage.size()).thenReturn(5);

        assertEquals(controller.getCashSize().getBody(), 5);
    }

    @Test
    public void testGetCounters(){
        when(counterService.getCounters()).thenReturn(new Counters(1,1));
        assertEquals(controller.getCounters().getBody(), new Counters(1,1));
    }

    @Test
    public void testResetCounters(){
        when(counterService.getCounters()).thenReturn(new Counters(0,0));
        assertEquals(controller.resetCounters().getBody(), new Counters(0,0));
    }
}
