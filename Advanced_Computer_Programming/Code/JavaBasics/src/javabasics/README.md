# Java Examples

This directory contains examples demonstrating Java compilation, class paths, and program anatomy.

## Directory Structure

```
JavaExamples/
├── basic/              # Basic concepts
│   ├── anatomy/        # Basic program structure
│   ├── compilation/    # Basic compilation examples
│   └── path_classpath/ # Basic classpath examples
├── medium/             # Intermediate concepts
│   ├── anatomy/        # Intermediate program structure
│   ├── compilation/    # Intermediate compilation examples 
│   └── path_classpath/ # Intermediate classpath examples
└── advanced/           # Advanced concepts
    ├── anatomy/        # Advanced program structure
    ├── compilation/    # Advanced build tools
    └── path_classpath/ # Advanced classloading
```

## Compiling and Running Java Programs

### Basic Compilation (Command Prompt)

1. Navigate to the directory containing your .java file:
   ```
   cd JavaExamples/basic/compilation
   ```

2. Compile the Java file:
   ```
   javac SimpleCompilation.java
   ```

3. Run the compiled program:
   ```
   java SimpleCompilation
   ```

### Understanding Java Program Anatomy

Explore the examples in the `anatomy` directories to understand Java program structure:

- `basic/anatomy/1_HelloWorld.java` - Basic class structure and main method
- `medium/anatomy/2_PackageDemo.java` - Package structure and object-oriented programming
- `advanced/anatomy/3_ComplexProgram.java` - Advanced Java features and OOP concepts

### Working with CLASSPATH

The CLASSPATH is how Java finds your compiled classes. Examples in the `path_classpath` directories demonstrate:

1. Setting the classpath when running Java programs:
   ```
   java -cp "path/to/classes;path/to/lib.jar" MyClass
   ```
   (Use colons instead of semicolons on Unix/Linux/Mac: `path/to/classes:path/to/lib.jar`)

2. Using the CLASSPATH environment variable:
   ```
   set CLASSPATH=path/to/classes;path/to/lib.jar
   ```
   (On Unix/Linux/Mac: `export CLASSPATH=path/to/classes:path/to/lib.jar`)

## Tips for Effective Java Development

1. Class Name = File Name: The name of your public class must match the name of the file (including case).
2. Package Structure = Directory Structure: Package declarations must match your directory structure.
3. Compilation Order: Compile dependent classes first or compile all at once.
4. Default Package: Files without a package declaration are in the "default package" (not recommended for real projects).

## Advanced Topics

See the examples in the `advanced` directories for:
- Building with Maven/Gradle
- Custom class loaders
- Complex program structures 