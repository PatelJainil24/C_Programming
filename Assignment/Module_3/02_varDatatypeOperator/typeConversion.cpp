#include <iostream>
using namespace std;

int main() {
    // Implicit type conversion (type promotion)
    int intVal = 10;
    double doubleVal = intVal;  

    cout << "Implicit Conversion:" << endl;
    cout << "Integer value: " << intVal << endl;
    cout << "After implicit conversion to double: " << doubleVal << endl;

    // Another implicit example
    double result = intVal + 5.75;  
    cout << "Result of int + double: " << result << endl;

    // Explicit type conversion (casting)
    double pi = 3.14159;
    int intPi = (int)pi;

    cout << "\nExplicit Conversion:" << endl;
    cout << "Original double value of pi: " << pi << endl;
    cout << "After explicit conversion to int (old style): " << intPi << endl;
    

    return 0;
}
