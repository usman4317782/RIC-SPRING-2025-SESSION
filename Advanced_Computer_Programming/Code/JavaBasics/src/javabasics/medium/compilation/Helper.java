// Helper.java - Support class for MultiFileCompilation demo
package javabasics.medium.compilation;

public class Helper {
    private String message;
    
    public Helper(String message) {
        this.message = message;
    }
    
    public String getMessage() {
        return "Helper class says: " + message;
    }
} 