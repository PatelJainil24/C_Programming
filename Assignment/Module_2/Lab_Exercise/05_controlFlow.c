/*
Q.Write a C program to check if a number is even or odd using an if-else 
statement. Extend the program using a switch statement to display the month 
name based on the user’s input (1 for January, 2 for February, etc.).
*/

#include<stdio.h>

int main(){

    int num,num2;

    printf("Enter the number: ");
    scanf("%d",&num);

    if(num % 2 == 0){
        printf("The number %d is even\n",num);
    }else{
        printf("The number %d is odd\n",num);
    }

    printf("\n");

    printf("Enter Month Number: ");
    scanf("%d",&num2);

    switch(num2){
        case 1:
            printf("Jan");
            break;
        case 2:
            printf("Feb");
            break;
        case 3:
            printf("March");
            break;
        case 4:
            printf("Apr");
            break;
        case 5:
            printf("May");
            break;
        case 6:
            printf("Jun");
            break;
        case 7:
            printf("July");
            break;
        case 8:
            printf("Aug");
            break;
        case 9:
            printf("Sep");
            break;
        case 10:
            printf("Oct");
            break;
        case 11:
            printf("Nov");
            break;
        case 12:
            printf("Dec");
            break;
        default:
        printf("Looking forward to the Month");
    }

    return 0;
}