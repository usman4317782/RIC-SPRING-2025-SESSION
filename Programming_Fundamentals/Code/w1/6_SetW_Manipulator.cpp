/*
 * 6. setw Manipulator in C++
 */

#include <iostream>
#include <iomanip> // Required for setw
using namespace std;

int main() {
    // Without setw
    cout << "Without setw: " << 10 << 20 << 30 << endl;
    
    // With setw
    cout << "With setw:    " << setw(5) << 10 << setw(5) << 20 << setw(5) << 30 << endl;
    
    // Simple table with setw
    cout << "\nName\tAge" << endl;
    cout << setw(10) << "John" << setw(5) << 25 << endl;
    cout << setw(10) << "Sarah" << setw(5) << 30 << endl;
    
    return 0;
} 