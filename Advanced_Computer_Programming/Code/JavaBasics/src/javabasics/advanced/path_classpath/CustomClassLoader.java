// CustomClassLoader.java - Advanced example demonstrating custom class loader
package javabasics.advanced.path_classpath;

import java.io.ByteArrayOutputStream;
import java.io.File;
import java.io.IOException;
import java.io.InputStream;
import java.net.URL;
import java.net.URLConnection;

/**
 * Advanced example demonstrating a custom ClassLoader.
 * This shows how Java's class loading mechanism works
 * and how you can customize it.
 */
public class CustomClassLoader extends ClassLoader {
    private String baseUrl;
    
    public CustomClassLoader(String baseUrl) {
        this.baseUrl = baseUrl;
    }
    
    @Override
    protected Class<?> findClass(String className) throws ClassNotFoundException {
        try {
            // Convert class name to URL path format
            String path = className.replace('.', '/') + ".class";
            URL url = new URL(baseUrl + "/" + path);
            
            // Get connection to the URL
            URLConnection connection = url.openConnection();
            
            // Load class bytes from the connection
            InputStream input = connection.getInputStream();
            ByteArrayOutputStream output = new ByteArrayOutputStream();
            
            int data = input.read();
            while (data != -1) {
                output.write(data);
                data = input.read();
            }
            
            input.close();
            
            // Convert to byte array
            byte[] classData = output.toByteArray();
            
            // Define and return the class
            return defineClass(className, classData, 0, classData.length);
            
        } catch (IOException e) {
            throw new ClassNotFoundException(
                "Could not load class " + className, e);
        }
    }
    
    /**
     * Main method to demonstrate usage of the custom class loader.
     * 
     * Note: This is a demonstration only and won't actually run
     * without network access and a server with Java classes.
     */
    public static void main(String[] args) {
        System.out.println("Advanced Class Loading Demo");
        System.out.println("==========================");
        System.out.println("\nThis example demonstrates:");
        System.out.println("1. How ClassLoaders work in Java");
        System.out.println("2. Creating a custom ClassLoader");
        System.out.println("3. Loading classes from non-standard locations");
        System.out.println("4. The delegation model of class loading");
        
        System.out.println("\nTo run this example with non-standard classpath locations:");
        System.out.println("java -cp /path/to/parent/classes:/path/to/app/classes CustomClassLoader");
        
        // Example usage (won't actually load a class without setup)
        try {
            String serverUrl = "http://example.com/classes";
            CustomClassLoader loader = new CustomClassLoader(serverUrl);
            
            System.out.println("\nAttempting to load classes from: " + serverUrl);
            System.out.println("(This is for demonstration - not actually connecting)");
            
            // This would load a class from the custom location if it existed
            // Class<?> loadedClass = loader.loadClass("com.example.RemoteClass");
            // System.out.println("Successfully loaded: " + loadedClass.getName());
            
        } catch (Exception e) {
            System.out.println("Error: " + e.getMessage());
        }
    }
} 