package ControlFlow_03;

import java.util.Scanner;

public class ControlFlow {
    

    public static void main(String[] args) {
        
        //---- Find if a number is even or odd ----

        Scanner sc = new Scanner(System.in);

        System.out.println("Enter the number: ");
        double num = sc.nextDouble();


        if(num % 2 == 0)
        {
            System.out.println("The number is Odd");
        }
        else{

            System.out.println("The number is Even");
        }


        


    }
    




}
