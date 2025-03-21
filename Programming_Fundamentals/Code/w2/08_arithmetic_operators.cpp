#include <iostream>
using namespace std;

int main() {
    // Basic Arithmetic Operators in C++
    
    // Initial values
    int a = 15, b = 4;
    
    cout << "Working with values: a = " << a << ", b = " << b << endl;
    
    // Addition operator (+)
    int sum = a + b;
    cout << "\n1. Addition (+):" << endl;
    cout << "a + b = " << sum << endl;
    
    // Subtraction operator (-)
    int difference = a - b;
    cout << "\n2. Subtraction (-):" << endl;
    cout << "a - b = " << difference << endl;
    
    // Multiplication operator (*)
    int product = a * b;
    cout << "\n3. Multiplication (*):" << endl;
    cout << "a * b = " << product << endl;
    
    // Division operator (/)
    int quotient = a / b;
    cout << "\n4. Division (/):" << endl;
    cout << "a / b = " << quotient << " (integer division)" << endl;
    
    // Floating point division
    float floatA = 15.0f, floatB = 4.0f;
    float floatQuotient = floatA / floatB;
    cout << "15.0 / 4.0 = " << floatQuotient << " (floating point division)" << endl;
    
    // Integer to float division
    float mixedQuotient = a / (float)b;
    cout << "a / (float)b = " << mixedQuotient << " (casting b to float)" << endl;
    
    // Modulus operator (%) - returns remainder
    int remainder = a % b;
    cout << "\n5. Modulus (%):" << endl;
    cout << "a % b = " << remainder << " (remainder of a/b)" << endl;
    
    // Compound assignment operators
    int x = 10;
    cout << "\n6. Compound Assignment Operators:" << endl;
    cout << "Initial value: x = " << x << endl;
    
    // Addition assignment (+=)
    x += 5;  // Equivalent to: x = x + 5
    cout << "x += 5: " << x << endl;
    
    // Subtraction assignment (-=)
    x -= 3;  // Equivalent to: x = x - 3
    cout << "x -= 3: " << x << endl;
    
    // Multiplication assignment (*=)
    x *= 2;  // Equivalent to: x = x * 2
    cout << "x *= 2: " << x << endl;
    
    // Division assignment (/=)
    x /= 4;  // Equivalent to: x = x / 4
    cout << "x /= 4: " << x << endl;
    
    // Modulus assignment (%=)
    x %= 3;  // Equivalent to: x = x % 3
    cout << "x %= 3: " << x << endl;
    
    return 0;
} 