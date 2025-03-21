// ExternalJarDemo.java - Medium example for external JAR usage
package javabasics.medium.path_classpath;

// Note: This example assumes you have a JAR file to include in your classpath
// For example, you might download Apache Commons Lang for this demo

public class ExternalJarDemo {
    public static void main(String[] args) {
        System.out.println("Demonstrating external JAR usage with classpath");
        
        // This would use a class from an external JAR like Commons Lang
        // For example: String reversed = StringUtils.reverse("Hello World");
        // You would compile and run with:
        //   javac -cp ".;path/to/commons-lang3-3.12.0.jar" ExternalJarDemo.java
        //   java -cp ".;path/to/commons-lang3-3.12.0.jar" ExternalJarDemo
        
        System.out.println("\nCompile with: javac -cp \".;path/to/your.jar\" ExternalJarDemo.java");
        System.out.println("Run with: java -cp \".;path/to/your.jar\" ExternalJarDemo");
        System.out.println("\nNote: On Linux/Mac use : instead of ; in the classpath");
    }
} 