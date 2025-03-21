#include <iostream>
using namespace std;

int main() {
    // Different ways to initialize variables
    
    // Method 1: Declaration followed by assignment
    int age;
    age = 25;
    
    // Method 2: Initialization at declaration
    int score = 95;
    
    // Method 3: Uniform initialization (C++11 and later)
    int count{10};
    
    // Method 4: Multiple variables in one line
    int x = 10, y = 20, z = 30;
    
    // Initializing different data types
    int integer = 42;
    float decimal = 3.14f;  // 'f' suffix for float
    double pi = 3.14159265359;
    char grade = 'A';
    bool isActive = true;
    
    // Display all initialized variables
    cout << "age: " << age << endl;
    cout << "score: " << score << endl;
    cout << "count: " << count << endl;
    cout << "x: " << x << ", y: " << y << ", z: " << z << endl;
    cout << "integer: " << integer << endl;
    cout << "decimal: " << decimal << endl;
    cout << "pi: " << pi << endl;
    cout << "grade: " << grade << endl;
    cout << "isActive: " << isActive << endl;
    
    return 0;
} 