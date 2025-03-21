#include <iostream>
#include <string>
#include <limits>
using namespace std;

int main() {
    // Advanced input techniques and validation
    
    // 1. Reading a full line of text (including spaces)
    string fullName;
    cout << "Enter your full name: ";
    cin.ignore(); // Clear any previous newline in buffer
    getline(cin, fullName);
    cout << "Hello, " << fullName << "!" << endl;
    
    // 2. Input validation for positive numbers
    int positiveNumber;
    bool validInput = false;
    
    while (!validInput) {
        cout << "\nEnter a positive number: ";
        cin >> positiveNumber;
        
        // Check if input was valid
        if (cin.fail()) {
            cout << "Error: That's not a valid number. Try again." << endl;
            // Clear error flag
            cin.clear();
            // Ignore remaining characters including newline
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        } else if (positiveNumber <= 0) {
            cout << "Error: Number must be positive. Try again." << endl;
        } else {
            validInput = true;
        }
    }
    cout << "Thank you! You entered: " << positiveNumber << endl;
    
    // 3. Range validation
    int number;
    cout << "\nEnter a number between 1 and 10: ";
    cin >> number;
    
    while (number < 1 || number > 10) {
        cout << "Invalid input. Please enter a number between 1 and 10: ";
        cin.clear(); // Clear error flags
        cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Clear buffer
        cin >> number;
    }
    
    cout << "Thank you! You entered: " << number << endl;
    
    // 4. Type-specific input handling
    char choice;
    cout << "\nDo you want to continue? (y/n): ";
    cin >> choice;
    
    // Convert to lowercase for easier comparison
    choice = tolower(choice);
    
    while (choice != 'y' && choice != 'n') {
        cout << "Invalid input. Please enter 'y' for yes or 'n' for no: ";
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cin >> choice;
        choice = tolower(choice);
    }
    
    if (choice == 'y') {
        cout << "Continuing..." << endl;
    } else {
        cout << "Exiting..." << endl;
    }
    
    return 0;
} 