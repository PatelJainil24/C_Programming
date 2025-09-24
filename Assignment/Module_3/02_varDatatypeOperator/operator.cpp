#include <iostream>
using namespace std;

int main() {
    int a = 10, b = 3;

    // Arithmetic Operators
    cout << "=== Arithmetic Operators ===" << endl;
    cout << "a + b = " << (a + b) << endl;
    cout << "a - b = " << (a - b) << endl;
    cout << "a * b = " << (a * b) << endl;
    cout << "a / b = " << (a / b) << " (integer division)" << endl;
    cout << "a % b = " << (a % b) << endl;

    // Relational Operators
    cout << "\n=== Relational Operators ===" << endl;
    cout << "a == b: " << (a == b) << endl;
    cout << "a != b: " << (a != b) << endl;
    cout << "a > b: " << (a > b) << endl;
    cout << "a < b: " << (a < b) << endl;
    cout << "a >= b: " << (a >= b) << endl;
    cout << "a <= b: " << (a <= b) << endl;

    // Logical Operators
    bool x = true, y = false;
    cout << "\n=== Logical Operators ===" << endl;
    cout << "x && y: " << (x && y) << endl;
    cout << "x || y: " << (x || y) << endl;
    cout << "!x: " << (!x) << endl;

    // Bitwise Operators
    cout << "\n=== Bitwise Operators ===" << endl;
    cout << "a & b = " << (a & b) << endl;   // Bitwise AND
    cout << "a | b = " << (a | b) << endl;   // Bitwise OR
    cout << "a ^ b = " << (a ^ b) << endl;   // Bitwise XOR
    cout << "~a = " << (~a) << endl;         // Bitwise NOT
    cout << "a << 1 = " << (a << 1) << endl; // Left shift
    cout << "a >> 1 = " << (a >> 1) << endl; // Right shift

    return 0;
}
