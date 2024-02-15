package com.example.petya.services;

import com.example.petya.entity.Result;
import org.junit.jupiter.api.Assertions;
import org.junit.jupiter.api.Test;

public class MainServiceTest {
    private MainService service = new MainService();

    @Test
    public void testAll(){
        int steps = 5;
        Result result = service.getResult(steps);

        Assertions.assertNotNull(result);
        Assertions.assertTrue(result.getPosition() <= steps);
        Assertions.assertTrue(result.getMaxPosition() <= steps);
        Assertions.assertTrue(result.getMaxPosition() >= result.getPosition());
    }
}
