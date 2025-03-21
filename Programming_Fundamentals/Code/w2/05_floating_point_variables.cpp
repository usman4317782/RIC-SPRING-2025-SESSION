#include <iostream>
#include <iomanip>  // For setprecision
using namespace std;

int main() {
    // Floating point variables in C++
    
    // Types of floating point variables
    float simpleFloat = 3.14159265359f;  // f suffix for float, typically 7 digits precision
    double regularDouble = 3.14159265359;  // No suffix needed, typically 15 digits precision
    long double extendedDouble = 3.14159265359L;  // L suffix, extended precision
    
    // Set output formatting for better precision display
    cout << fixed << setprecision(10);  // Show 10 decimal places
    
    // Display values
    cout << "float value: " << simpleFloat << endl;
    cout << "double value: " << regularDouble << endl;
    cout << "long double value: " << extendedDouble << endl;
    
    // Memory sizes
    cout << "\nMemory sizes:" << endl;
    cout << "Size of float: " << sizeof(simpleFloat) << " bytes" << endl;
    cout << "Size of double: " << sizeof(regularDouble) << " bytes" << endl;
    cout << "Size of long double: " << sizeof(extendedDouble) << " bytes" << endl;
    
    // Precision demonstration
    float f1 = 1.0f/3.0f;
    double d1 = 1.0/3.0;
    
    cout << "\nPrecision demonstration:" << endl;
    cout << "1/3 as float: " << f1 << endl;
    cout << "1/3 as double: " << d1 << endl;
    
    // Scientific notation
    float largeNumber = 1.234e6f;  // 1.234 × 10^6 = 1,234,000
    float smallNumber = 1.234e-6f; // 1.234 × 10^-6 = 0.000001234
    
    cout << "\nScientific notation:" << endl;
    cout << "Large number (1.234e6): " << largeNumber << endl;
    cout << "Same number in scientific: " << scientific << largeNumber << endl;
    cout << "Small number (1.234e-6): " << fixed << smallNumber << endl;
    cout << "Same number in scientific: " << scientific << smallNumber << endl;
    
    // Floating point operations
    float a = 10.5f, b = 2.5f;
    
    cout << fixed << setprecision(2);  // Reset to 2 decimal places for operations
    cout << "\nFloating point arithmetic:" << endl;
    cout << "a + b = " << a + b << endl;  // Addition
    cout << "a - b = " << a - b << endl;  // Subtraction
    cout << "a * b = " << a * b << endl;  // Multiplication
    cout << "a / b = " << a / b << endl;  // Division (note: keeps decimal part)
    
    // Division by zero approximation
    float infinity = 1.0f / 0.0f;  // This will give infinity or error depending on compiler
    cout << "\nSpecial values:" << endl;
    cout << "Attempt to divide by zero: ";
    try {
        cout << infinity << endl;
    } catch (...) {
        cout << "Error occurred" << endl;
    }
    
    return 0;
} 