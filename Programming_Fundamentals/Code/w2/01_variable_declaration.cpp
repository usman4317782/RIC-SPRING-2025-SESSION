#include <iostream>
using namespace std;

int main() {
    // Declaration of variables
    int number;         // Declaration of integer variable
    float decimal;      // Declaration of floating point variable
    double largeDecimal; // Declaration of double precision floating point
    char letter;        // Declaration of character variable
    bool flag;          // Declaration of boolean variable
    
    // When a variable is declared:
    // 1. Memory is allocated for that variable
    // 2. The variable gets a name that we can use in our code
    // 3. The memory contents are undefined (garbage value) until initialized
    
    // Display memory addresses of declared variables
    cout << "Memory address of number: " << &number << endl;
    cout << "Memory address of decimal: " << &decimal << endl;
    cout << "Memory address of largeDecimal: " << &largeDecimal << endl;
    cout << "Memory address of letter: " << &letter << endl;
    cout << "Memory address of flag: " << &flag << endl;
    
    return 0;
} 