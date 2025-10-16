package Operator_02;

import java.util.Scanner;

public class Calculator {

    public static void main(String[] args) {
        
        // ---------- Part 1: Demonstrating Different Data Types ----------
        int a = 10;              // Integer
        double b = 5.5;          // Double
        float c = 3.2f;          // Float
        char grade = 'A';        // Character
        boolean isPass = true;   // Boolean
        String name = "Jainil";  // String

        System.out.println("---- Different Data Types ----");
        System.out.println("Integer: " + a);
        System.out.println("Double: " + b);
        System.out.println("Float: " + c);
        System.out.println("Character: " + grade);
        System.out.println("Boolean: " + isPass);
        System.out.println("String: " + name);
        System.out.println();

        //--------Part 2: Simple Calculator ------------

        Scanner sc = new Scanner(System.in);

        System.out.println("----Simple Calculator----");
        System.out.print("Enter First number: ");
        double num1 = sc.nextDouble();

        System.out.print("Enter second number: ");
        double num2 = sc.nextDouble();

        System.out.println("Choose operation (+, -, *, /, %): ");
        char op = sc.next().charAt(0);



        double result = 0;

        switch(op) {
            case '+': result = num1 + num2; break;
            case '-': result = num1 - num2; break;
            case '*': result = num1 * num2; break;
            case '/': 
                if(num2 != 0)
                    result = num1 / num2; 
                else {
                    System.out.println("Error! Division by zero.");
                    sc.close();
                    return;
                }
                break;
            case '%': result = num1 % num2; break;
            default: 
                System.out.println("Invalid Operator!");
                sc.close();
                return;
        }

        System.out.println("Result: " + result);


        // ---------- Part 3: Type Casting ----------
        System.out.println("---- Type Casting ----");

        // Implicit Casting (Widening) - smaller to larger type
        int intVal = 50;
        double doubleVal = intVal;  // automatically converted to double
        System.out.println("Implicit Casting (int -> double): " + doubleVal);

        // Explicit Casting (Narrowing) - larger to smaller type
        double x = 99.99;
        int y = (int) x;  // manually cast double to int
        System.out.println("Explicit Casting (double -> int): " + y);

        sc.close();
    }
        
}
