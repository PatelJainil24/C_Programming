/*
Q.Write a C program that accepts 10 integers from the user and stores them in an array. The program should then find and print the maximum and minimum values in the array. 
 Challenge: Extend the program to sort the array in ascending order.
*/

#include<stdio.h>
#include <limits.h>

void MaxMinArray(int arr[],int sz){

    int maxArr = INT_MIN;
    int minArr = INT_MAX;

    for(int i=0; i<sz; i++){
        if(arr[i] > maxArr){
            maxArr = arr[i];
        }

        if(arr[i]< minArr){
            minArr = arr[i];
        }
    }

    printf("Max Arr: %d\n",maxArr);
    printf("Min Arr: %d\n",minArr);
}

int main(){
    int arr[10];

    printf("Enter the 10 number with space: ");

    for(int i=0; i<10; i++){
        scanf("%d",&arr[i]);
    }


    MaxMinArray(arr,10);

    return 0;
}