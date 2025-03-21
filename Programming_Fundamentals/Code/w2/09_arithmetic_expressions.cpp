#include <iostream>
using namespace std;

int main() {
    // Arithmetic Expressions and Operator Precedence
    
    // 1. Basic Expression Evaluation
    int result1 = 5 + 3 * 2;
    cout << "5 + 3 * 2 = " << result1 << endl;
    cout << "Multiplication (*) has higher precedence than addition (+)" << endl;
    
    // 2. Using Parentheses to Control Evaluation Order
    int result2 = (5 + 3) * 2;
    cout << "\n(5 + 3) * 2 = " << result2 << endl;
    cout << "Parentheses force addition to be performed first" << endl;
    
    // 3. Operator Precedence Demonstration
    int a = 10, b = 5, c = 2;
    
    int expr1 = a + b * c;
    int expr2 = a / b + c;
    int expr3 = a * (b + c);
    int expr4 = a % b + c * a;
    
    cout << "\nOperator Precedence Examples:" << endl;
    cout << "a = " << a << ", b = " << b << ", c = " << c << endl;
    cout << "a + b * c = " << expr1 << " (multiplication before addition)" << endl;
    cout << "a / b + c = " << expr2 << " (division before addition)" << endl;
    cout << "a * (b + c) = " << expr3 << " (parentheses first, then multiplication)" << endl;
    cout << "a % b + c * a = " << expr4 << " (modulus and multiplication before addition)" << endl;
    
    // 4. Complex Expressions
    int complex1 = 10 + 20 * 3 / 2 - 5;
    cout << "\nComplex Expression:" << endl;
    cout << "10 + 20 * 3 / 2 - 5 = " << complex1 << endl;
    cout << "Evaluation order: (20 * 3) first, then (60 / 2), then 10 + 30 - 5" << endl;
    
    // 5. Order of evaluation (left to right for same precedence)
    int leftRight = 20 / 4 * 2;  // Evaluated as (20 / 4) * 2
    cout << "\nLeft-to-right evaluation:" << endl;
    cout << "20 / 4 * 2 = " << leftRight << endl;
    cout << "Evaluated as (20 / 4) * 2 = 5 * 2 = 10" << endl;
    
    // 6. Mixed operators with same precedence
    int mixed = 15 - 5 + 3;  // Evaluated as (15 - 5) + 3
    cout << "\nMixed operators with same precedence:" << endl;
    cout << "15 - 5 + 3 = " << mixed << endl;
    cout << "Evaluated left to right: (15 - 5) + 3 = 10 + 3 = 13" << endl;
    
    // 7. Expression with multiple types
    double mixedTypes = 10 + 5.5 / 2 + 1;
    cout << "\nExpression with mixed types:" << endl;
    cout << "10 + 5.5 / 2 + 1 = " << mixedTypes << endl;
    cout << "Division first, then additions from left to right" << endl;
    
    // 8. Common operator precedence table (from highest to lowest)
    cout << "\nOperator Precedence (highest to lowest):" << endl;
    cout << "1. Parentheses ()" << endl;
    cout << "2. Unary operators (++, --, !)" << endl;
    cout << "3. Multiplication, Division, Modulus (*, /, %)" << endl;
    cout << "4. Addition, Subtraction (+, -)" << endl;
    cout << "5. Assignment operators (=, +=, -=, etc.)" << endl;
    
    return 0;
} 