#include <iostream>
#include <string>
using namespace std;

int main() {
    
    const double PI = 3.14159;

   
    int age = 20;
    double height = 5.9;
    char grade = 'A';
    string name = "Jainil";
    bool isStudent = true;

    
    int nextYearAge = age + 1;
    double circleArea = PI * (height * height);  
    string greeting = "Hello, " + name;

    
    cout << "Name: " << name << endl;
    cout << "Age: " << age << endl;
    cout << "Next year, age will be: " << nextYearAge << endl;
    cout << "Height: " << height << " ft" << endl;
    cout << "Grade: " << grade << endl;
    cout << "Is student: " << (isStudent ? "Yes" : "No") << endl;
    cout << "Circle area (using height as radius): " << circleArea << endl;
    cout << greeting << "! Welcome to the program." << endl;

    return 0;
}
