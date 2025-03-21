#include <iostream>
using namespace std;

int main() {
    // Basic input using cin
    
    // Integer input
    int age;
    cout << "Enter your age: ";
    cin >> age;
    cout << "You entered: " << age << " years old" << endl;
    
    // Float input
    float height;
    cout << "\nEnter your height in meters: ";
    cin >> height;
    cout << "Your height is: " << height << " meters" << endl;
    
    // Character input
    char initial;
    cout << "\nEnter your first initial: ";
    cin >> initial;
    cout << "Your initial is: " << initial << endl;
    
    // String input (single word)
    string name;
    cout << "\nEnter your first name: ";
    cin >> name;  // Note: this will only read until the first whitespace
    cout << "Hello, " << name << "!" << endl;
    
    // Multiple inputs on one line
    int num1, num2;
    cout << "\nEnter two numbers separated by space: ";
    cin >> num1 >> num2;
    cout << "You entered: " << num1 << " and " << num2 << endl;
    
    // Calculating with input
    cout << "Their sum is: " << num1 + num2 << endl;
    cout << "Their product is: " << num1 * num2 << endl;
    
    return 0;
} 