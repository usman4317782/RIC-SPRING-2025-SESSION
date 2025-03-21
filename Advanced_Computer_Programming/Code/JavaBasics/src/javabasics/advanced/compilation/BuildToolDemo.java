// BuildToolDemo.java - Advanced example demonstrating build tool concepts
package javabasics.advanced.compilation;

/**
 * This example represents a class that would typically be part of a larger
 * project built with a tool like Maven or Gradle.
 * 
 * While we can't demonstrate the actual build process in a single file,
 * this shows how such a file might be structured in a Maven project.
 */
public class BuildToolDemo {
    /**
     * Method that would use dependencies managed by Maven/Gradle
     */
    public void performOperation() {
        // In a real project, these might be external dependencies
        // managed by the build tool
        System.out.println("Performing operation with external dependencies");
    }
    
    public static void main(String[] args) {
        System.out.println("Build Tool Integration Demo");
        System.out.println("===========================");
        System.out.println("\nAdvanced compile/build concepts:");
        System.out.println("1. Maven pom.xml would define dependencies and build steps");
        System.out.println("2. Source files organized in src/main/java/ directory");
        System.out.println("3. Resources in src/main/resources/");
        System.out.println("4. Tests in src/test/java/");
        System.out.println("\nTo build with Maven:");
        System.out.println("mvn clean compile");
        System.out.println("\nTo package as JAR:");
        System.out.println("mvn package");
        System.out.println("\nTo run tests:");
        System.out.println("mvn test");
        
        new BuildToolDemo().performOperation();
    }
} 