/*
Q.Write a C program that stores 5 integers in a one-dimensional array and prints 
them. Extend this to handle a two-dimensional array (3x3 matrix) and 
calculate the sum of all elements.
*/

#include<stdio.h>

int main(){

    int arr[5] = {1,2,3,4,5};

    printf("arr[5]: ");
    for(int i=0; i<5; i++){
        printf("%d, ",arr[i]);
    }

    printf("\n");
    int arr2[3][3] = {{1,2,3},{4,5,6},{7,8,9}};


    // sum...
    int sum =0;
    printf("sum of each element: ");
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            sum += arr2[i][j];
        }
    }

    printf("%d",sum);

    return 0;
}