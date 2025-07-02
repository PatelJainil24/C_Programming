/*
Q.Write a C program that includes variables, constants, and comments. Declare 
and use different data types (int, char, float) and display their values. 
*/

#include<stdio.h>

int main(){

    const int num = 34; // integer 
    const char ch = 'A';
    const float price= 45.44;

    printf("num: %d\nch: %c\nprice: %f\n",num,ch,price); // display the value of variable


    return 0;
}