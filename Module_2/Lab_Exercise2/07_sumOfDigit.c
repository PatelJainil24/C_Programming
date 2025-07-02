/*
Q. Write a C program that takes an integer from the user and calculates the sum of its digits using a while loop.  Challenge: Extend the program to reverse the digits of the number. 
*/

#include<stdio.h>
int main(){

    int num1;

    printf("Enter the number: ");
    scanf("%d",&num1);

    int sum =0;
    while(num1>0){
        int rem = num1 %10;
        sum +=rem;
        num1 = num1/10;
    }

    printf("Sum: %d",sum);

    return 0;
}