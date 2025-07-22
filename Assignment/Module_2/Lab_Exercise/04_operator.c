/*
Q.Write a C program that accepts two integers from the user and performs 
arithmetic, relational, and logical operations on them. Display the results. 
*/

#include<stdio.h>

int main(){

    int num, num2;

    printf("Enter the Two number: ");
    scanf("%d %d",&num,&num2);

    // Arithmetic Operators...
    printf("Arithmetic Operators:\n");
    printf("addition: %d\n",num + num2);
    printf("subtraction: %d\n",num - num2);
    printf("multiplication: %d\n",num * num2);
    printf("division: %d\n",num / num2);
    printf("modulus : %d\n",num % num2);
    printf("\n");
    //Relational Operators...
    // op : 0(false) , 1(true)

    printf("Relational Operators:\n");
    printf("equal to : %d\n",num == num2);
    printf("not equal to  : %d\n",num != num2);
    printf("greater than  : %d\n",num > num2);
    printf("less than  : %d\n",num < num2);
    printf("greater than or equal to  : %d\n",num >= num2);
    printf("less than or equal to  : %d\n",num <= num2);
    printf("\n");

    //Logical Operators...

    printf("Logical Operators:\n");
    printf("Logical AND  : %d\n",num <= num2 && num != num2);
    printf("Logical OR  : %d\n",num <= num2 || num != num2);
    printf("Logical NOT  : %d\n",!(num <= num2 && num != num2));
    printf("\n");


    return 0;
}