/*
Q. Write a C program that acts as a simple calculator. The program should take two numbers 
and an operator as input from the user and perform the respective operation (addition, 
subtraction, multiplication, division, or modulus) using operators. 
 Challenge: Extend the program to handle invalid operator inputs. 
*/

#include<stdio.h>
int main(){

    char ch;
    int num1, num2;
    printf("enter: \n");
    scanf("%d %c %d",&num1,&ch,&num2);
    
    float result;

    if(ch ==47){
        result = num1 / num2;
        printf("Result: %.2f",result);
    }else if(ch == 42){
        result = num1 * num2;
        printf("Result: %.2f",result);
    }else if(ch == 43){
        result = num1 + num2;
        printf("Result: %.2f",result);
    }else if(ch == 45){
        result = num1 - num2;
        printf("Result: %.2f",result);
    }else if(ch == 37){
        result = num1 % num2;
        printf("Result: %.2f",result);
    }else{
        printf("jatireje");
    }


    //printf("%f\n",result);
    return 0;
}