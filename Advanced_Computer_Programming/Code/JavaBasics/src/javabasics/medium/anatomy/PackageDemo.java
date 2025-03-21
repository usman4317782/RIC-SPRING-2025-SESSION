// PackageDemo.java - Medium example showing package structure
package javabasics.medium.anatomy;

/**
 * Example of a Java class with package declaration and multiple methods
 */
public class PackageDemo {
    // Instance variable
    private String message;
    
    // Constructor
    public PackageDemo(String message) {
        this.message = message;
    }
    
    // Method that returns a value
    public String getMessage() {
        return message;
    }
    
    // Method that modifies state
    public void setMessage(String message) {
        this.message = message;
    }
    
    // Main method
    public static void main(String[] args) {
        // Create an instance of the class
        PackageDemo demo = new PackageDemo("Hello from package demo!");
        System.out.println(demo.getMessage());
        
        // Modify and display again
        demo.setMessage("Message changed!");
        System.out.println(demo.getMessage());
    }
} 