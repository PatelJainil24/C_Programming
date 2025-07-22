/*
Q. Write a C program that takes an integer input from the user and prints its multiplication 
table using a for loop. 
 Challenge: Allow the user to input the range of the multiplication table (e.g., from 1 to N).
*/

#include<stdio.h>
int main(){

    int num1;

    printf("Enter the number: ");
    scanf("%d",&num1);

    // for(int i=1; i<=10 ;i++){
    //     printf("%d * %d = %d\n",num1, i, num1 * i);
    // }

    for(int j=1; j<=num1; j++){
        for(int i=1; i<=10 ;i++){
            printf("%d * %d = %d\n",j, i, j * i);
        }
        printf("\n");   
    }

    return 0;
}