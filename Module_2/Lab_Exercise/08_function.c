/*
Q.Write a C program that calculates the factorial of a number using a function. 
Include function declaration, definition, and call. 
*/

void factorial(int num);

#include<stdio.h>

int main(){

    int num;

    printf("Enter the number: ");
    scanf("%d",&num);

    factorial(num);
    return 0;
}

void factorial(int num){
    int result =1;
    for(int i=0; i < num; i++){
        result = result*(i+1);
    }

    printf("Result: %d",result);
}