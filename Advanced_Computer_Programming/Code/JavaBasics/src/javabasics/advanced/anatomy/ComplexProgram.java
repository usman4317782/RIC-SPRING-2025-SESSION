// ComplexProgram.java - Advanced example showing complete Java program anatomy
package javabasics.advanced.anatomy;
import java.util.ArrayList;
import java.util.List;
import java.util.function.Predicate;
import java.util.stream.Collectors;

/**
 * Advanced example demonstrating Java class anatomy with interfaces,
 * generics, lambda expressions, and streams.
 */
public class ComplexProgram {
    // Static nested interface
    public static interface DataProcessor<T> {
        List<T> process(List<T> data, Predicate<T> filter);
    }
    
    // Static nested class implementing interface
    public static class DefaultProcessor<T> implements DataProcessor<T> {
        @Override
        public List<T> process(List<T> data, Predicate<T> filter) {
            return data.stream()
                      .filter(filter)
                      .collect(Collectors.toList());
        }
    }
    
    // Inner class with access to outer class members
    private class DataManager {
        private List<String> cache = new ArrayList<>();
        
        public void addToCache(String item) {
            cache.add(item);
            totalItems++; // Access to outer class field
        }
        
        public List<String> getCache() {
            return new ArrayList<>(cache);
        }
    }
    
    // Instance variables
    private int totalItems;
    private DataManager manager;
    
    // Constructor
    public ComplexProgram() {
        this.totalItems = 0;
        this.manager = new DataManager();
    }
    
    // Instance methods
    public void addData(String item) {
        manager.addToCache(item);
    }
    
    public List<String> getFilteredData(Predicate<String> filter) {
        DataProcessor<String> processor = new DefaultProcessor<>();
        return processor.process(manager.getCache(), filter);
    }
    
    public int getTotalItems() {
        return totalItems;
    }
    
    // Main method
    public static void main(String[] args) {
        ComplexProgram program = new ComplexProgram();
        
        // Add some data
        program.addData("apple");
        program.addData("banana");
        program.addData("cherry");
        program.addData("date");
        program.addData("elderberry");
        
        System.out.println("Total items: " + program.getTotalItems());
        
        // Use lambda expression with functional interface
        List<String> filtered = program.getFilteredData(item -> item.length() > 5);
        
        System.out.println("Items with length > 5: " + filtered);
        
        // Demo lambda and method reference
        DataProcessor<Integer> numberProcessor = new DefaultProcessor<>();
        List<Integer> numbers = List.of(1, 2, 3, 4, 5, 6, 7, 8, 9, 10);
        
        // Using lambda
        List<Integer> evenNumbers = numberProcessor.process(numbers, n -> n % 2 == 0);
        System.out.println("Even numbers: " + evenNumbers);
    }
} 