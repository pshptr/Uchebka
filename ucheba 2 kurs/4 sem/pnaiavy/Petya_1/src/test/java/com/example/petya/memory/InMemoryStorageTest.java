package com.example.petya.memory;

import com.example.petya.entity.Result;
import org.junit.jupiter.api.Assertions;
import org.junit.jupiter.api.Test;

import java.util.Map;

public class InMemoryStorageTest {
    private InMemoryStorage storage = new InMemoryStorage();

    @Test
    public void testAll(){
        storage.save(1, new Result(2,3));
        storage.save(4, new Result(5,6));
        storage.save(7, new Result(8,9));
        storage.save(10, new Result(11,12));

        Assertions.assertTrue(storage.size() == 4);

        Map<Integer, Result> results = storage.getMemory();
        Assertions.assertNotNull(results);
        Assertions.assertTrue(results.containsKey(1));
        Assertions.assertTrue(results.containsKey(4));
        Assertions.assertTrue(results.containsKey(7));
        Assertions.assertTrue(results.containsKey(10));
    }
}
