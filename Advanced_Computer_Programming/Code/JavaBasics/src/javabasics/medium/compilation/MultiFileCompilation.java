// MultiFileCompilation.java - Medium example for multi-file compilation
// This file depends on Helper.java which must be compiled together
package javabasics.medium.compilation;

public class MultiFileCompilation {
    public static void main(String[] args) {
        // Using a class defined in another file
        Helper helper = new Helper("Compilation Demo");
        
        System.out.println("Multi-file compilation demonstration");
        System.out.println("Helper message: " + helper.getMessage());
        
        System.out.println("\nTo compile both files:");
        System.out.println("javac MultiFileCompilation.java Helper.java");
        System.out.println("or: javac *.java");
        System.out.println("\nTo run:");
        System.out.println("java MultiFileCompilation");
    }
} 