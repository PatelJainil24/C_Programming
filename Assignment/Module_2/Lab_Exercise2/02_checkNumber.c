/*
Q. Write a C program that takes an integer from the user and checks the following using 
different operators: 
o Whether the number is even or odd. 
o Whether the number is positive, negative, or zero. 
o Whether the number is a multiple of both 3 and 5. 
*/

#include<stdio.h>
int main(){

    int num1;
    printf("enter number with space: \n");
    scanf("%d",&num1);

    if(num1 %2 ==0){
        printf("number is even\n");
    }else{
        printf("number is odd\n");
    }
    
    if(num1 > 0){
        printf("Number is positive\n");
    }else if(num1 <0){
        printf("Number is negative\n");
    }else{
        printf("Number is zero\n");
    }

    if(num1%3 ==0 && num1%5 == 0){
        printf("number is number is a multiple of both 3 and 5. \n");
    }else{
        printf("number is not number is a multiple of both 3 and 5. \n");
    }



    return 0;
}