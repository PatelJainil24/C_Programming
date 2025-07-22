/*
Q.Write a C program to demonstrate pointer usage. Use a pointer to modify the value of a variable and print the result.
*/


#include<stdio.h>
int main(){

    int a = 3;
    int b = 6;
    printf("before swap a:%d & b:%d\n",a,b);
    int *ptr1 =&a;
    int *ptr2 = &b;

    int temp = *ptr1;
    a = *ptr2;
    b = temp;

    printf("after swap a:%d & b:%d\n",a,b);
    return 0;
}