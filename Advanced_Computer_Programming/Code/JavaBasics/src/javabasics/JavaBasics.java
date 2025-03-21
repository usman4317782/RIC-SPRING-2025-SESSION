/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Main.java to edit this template
 */
package javabasics;

import java.util.Scanner;
import javabasics.advanced.anatomy.ComplexProgram;
import javabasics.advanced.compilation.BuildToolDemo;
import javabasics.advanced.path_classpath.CustomClassLoader;
import javabasics.basic.anatomy.HelloWorld;
import javabasics.basic.compilation.SimpleCompilation;
import javabasics.basic.path_classpath.ClasspathDemo;
import javabasics.medium.anatomy.PackageDemo;
import javabasics.medium.compilation.MultiFileCompilation;
import javabasics.medium.path_classpath.ExternalJarDemo;

/**
 * Main entry point for Java Basics examples
 * @author Lenovo
 */
public class JavaBasics {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        System.out.println("Java Basics Examples");
        System.out.println("===================");
        System.out.println("\nBasic Examples:");
        System.out.println("1. Basic - Hello World");
        System.out.println("2. Basic - Simple Compilation");
        System.out.println("3. Basic - Classpath Demo");
        
        System.out.println("\nMedium Examples:");
        System.out.println("4. Medium - Package Demo");
        System.out.println("5. Medium - Multi-file Compilation");
        System.out.println("6. Medium - External JAR Demo");
        
        System.out.println("\nAdvanced Examples:");
        System.out.println("7. Advanced - Complex Program");
        System.out.println("8. Advanced - Build Tool Demo");
        System.out.println("9. Advanced - Custom ClassLoader");
        
        System.out.println("\n0. Exit");
        
        Scanner scanner = new Scanner(System.in);
        System.out.print("\nEnter your choice: ");
        int choice = scanner.nextInt();
        
        switch (choice) {
            case 1:
                // Run the Hello World example
                HelloWorld.main(args);
                break;
                
            case 2:
                // Run the Simple Compilation example
                SimpleCompilation.main(args);
                break;
                
            case 3:
                // Run the Classpath Demo example
                ClasspathDemo.main(args);
                break;
                
            case 4:
                // Run the Package Demo example
                PackageDemo.main(args);
                break;
                
            case 5:
                // Run the Multi-file Compilation example
                MultiFileCompilation.main(args);
                break;
                
            case 6:
                // Run the External JAR Demo example
                ExternalJarDemo.main(args);
                break;
                
            case 7:
                // Run the Complex Program example
                ComplexProgram.main(args);
                break;
                
            case 8:
                // Run the Build Tool Demo example
                BuildToolDemo.main(args);
                break;
                
            case 9:
                // Run the Custom ClassLoader example
                CustomClassLoader.main(args);
                break;
                
            case 0:
                System.out.println("Exiting...");
                break;
                
            default:
                System.out.println("Invalid choice!");
        }
        
        scanner.close();
    }
    
}
