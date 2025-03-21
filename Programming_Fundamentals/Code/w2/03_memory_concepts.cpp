#include <iostream>
using namespace std;

int main() {
    // Memory concepts for variables
    
    // Memory allocation for different data types
    int intVar = 10;
    float floatVar = 10.5f;
    double doubleVar = 10.5;
    char charVar = 'A';
    bool boolVar = true;
    
    // Display memory size of each variable type
    cout << "Memory sizes:" << endl;
    cout << "int: " << sizeof(intVar) << " bytes" << endl;
    cout << "float: " << sizeof(floatVar) << " bytes" << endl;
    cout << "double: " << sizeof(doubleVar) << " bytes" << endl;
    cout << "char: " << sizeof(charVar) << " byte" << endl;
    cout << "bool: " << sizeof(boolVar) << " byte" << endl;
    
    // Memory addresses
    cout << "\nMemory addresses:" << endl;
    cout << "intVar address: " << &intVar << endl;
    cout << "floatVar address: " << &floatVar << endl;
    cout << "doubleVar address: " << &doubleVar << endl;
    cout << "charVar address: " << &charVar << endl;
    cout << "boolVar address: " << &boolVar << endl;
    
    // Modifying variable values (changing memory content)
    intVar = 20;
    cout << "\nAfter modification:" << endl;
    cout << "intVar new value: " << intVar << endl;
    cout << "intVar address (unchanged): " << &intVar << endl;
    
    // Array memory allocation (contiguous memory)
    int numbers[5] = {10, 20, 30, 40, 50};
    cout << "\nArray memory:" << endl;
    cout << "Array size: " << sizeof(numbers) << " bytes" << endl;
    cout << "Size of each element: " << sizeof(numbers[0]) << " bytes" << endl;
    cout << "Number of elements: " << sizeof(numbers) / sizeof(numbers[0]) << endl;
    
    // Memory addresses of array elements (should be sequential)
    cout << "\nArray element addresses:" << endl;
    for (int i = 0; i < 5; i++) {
        cout << "numbers[" << i << "] address: " << &numbers[i] << endl;
    }
    
    return 0;
} 