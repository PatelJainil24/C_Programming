/*
Q. Write a C program that accepts two 2x2 matrices from the user and adds them. Display the resultant matrix. 
 Challenge: Extend the program to work with 3x3 matrices and matrix multiplication. 
*/

#include<stdio.h>
int main(){

    int arr[2][2] = {{1,2},{3,4}};


    printf("Enter the Matrix 2X2 with space : \n");

    for(int i=0; i < 2; i++){
        for(int j=0; j < 2; j++){
            scanf("%d",&arr[i][j]);
        }
        
    }

    printf("\n");
    printf("Matrix 2X2: \n");
    for(int i=0; i < 2; i++){
        for(int j=0; j < 2; j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}