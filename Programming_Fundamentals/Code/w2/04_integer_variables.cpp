#include <iostream>
using namespace std;

int main() {
    // Integer variables in C++
    
    // Basic integer declaration and initialization
    int a = 10;
    
    // Different types of integers
    short shortInt = 32767;    // 2 bytes, range: -32,768 to 32,767
    int regularInt = 2147483647;  // 4 bytes, range: -2,147,483,648 to 2,147,483,647
    long longInt = 2147483647L;  // 4 or 8 bytes (system dependent), L suffix
    long long longLongInt = 9223372036854775807LL;  // 8 bytes, LL suffix
    
    // Unsigned integers (positive only, but larger positive range)
    unsigned int positiveOnly = 4294967295U;  // U suffix
    
    // Display values
    cout << "short int: " << shortInt << endl;
    cout << "regular int: " << regularInt << endl;
    cout << "long int: " << longInt << endl;
    cout << "long long int: " << longLongInt << endl;
    cout << "unsigned int: " << positiveOnly << endl;
    
    // Integer operations
    int x = 5, y = 2;
    
    // Simple arithmetic
    cout << "\nInteger arithmetic:" << endl;
    cout << "x + y = " << x + y << endl;  // Addition
    cout << "x - y = " << x - y << endl;  // Subtraction
    cout << "x * y = " << x * y << endl;  // Multiplication
    cout << "x / y = " << x / y << endl;  // Division (note: truncates decimal part)
    cout << "x % y = " << x % y << endl;  // Modulus (remainder)
    
    // Integer overflow
    short smallType = 32767;  // Maximum value for short
    cout << "\nOverflow demonstration:" << endl;
    cout << "Maximum short value: " << smallType << endl;
    smallType = smallType + 1;  // This will overflow
    cout << "After adding 1: " << smallType << " (overflow occurred)" << endl;
    
    // Size of integer types
    cout << "\nSize of integer types:" << endl;
    cout << "Size of short: " << sizeof(shortInt) << " bytes" << endl;
    cout << "Size of int: " << sizeof(regularInt) << " bytes" << endl;
    cout << "Size of long: " << sizeof(longInt) << " bytes" << endl;
    cout << "Size of long long: " << sizeof(longLongInt) << " bytes" << endl;
    
    return 0;
} 