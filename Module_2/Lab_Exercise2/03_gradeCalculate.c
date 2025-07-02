/*
Q.Write a C program that takes the marks of a student as input and displays the corresponding grade based on the following conditions: 
o Marks > 90: Grade A 
o Marks > 75 and <= 90: Grade B 
o Marks > 50 and <= 75: Grade C 
o Marks <= 50: Grade D 
 Use if-else or switch statements for the decision-making process.
*/

#include<stdio.h>
int main(){
    int num1;
    printf("Enter studnet marks: \n");
    scanf("%d",&num1);

    if(num1>90){
        printf("Grade:A");
    }else if(num1 >75 && num1<=90){
        printf("Grade:B");
    }else if(num1 >50 && num1<=75){
        printf("Grade:C");
    }else{
        printf("Grade:D");
    }


    return 0;
}