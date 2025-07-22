/*
Q.Write a C program that takes three numbers from the user and determines: 
    o The largest number. 
    o The smallest number.
*/

#include<stdio.h>
int main(){
    int num1,num2,num3;

    printf("Enter three number with space: ");
    scanf("%d %d %d",&num1,&num2,&num3);

    if(num1 > num2 && num1 > num3){
        printf("%d is the largest number\n",num1);
    }else if(num2 > num1 && num2 > num3){
        printf("%d is the largest number\n",num2);
    }else{
        printf("%d is the largest number\n",num3);
    }

    if(num1 < num2 && num1 < num3){
        printf("%d is the smallest numbe\n",num1);
    }else if(num2 < num1 && num2 < num3){
        printf("%d is the smallest number\n",num2);
    }else{
        printf("%d is the smallest number\n",num3);
    }
    return 0;
}