// ClasspathDemo.java - Basic example for classpath concepts
package javabasics.basic.path_classpath;

public class ClasspathDemo {
    public static void main(String[] args) {
        System.out.println("Demonstrating classpath basics");
        System.out.println("Current classpath: " + System.getProperty("java.class.path"));
        
        // Display current directory
        System.out.println("Current directory: " + System.getProperty("user.dir"));
    }
} 