/*
Q. Write a C program that takes N numbers from the user and stores them in an array. The 
program should then calculate and display the sum of all array elements. 
 Challenge: Modify the program to also find the average of the numbers.
*/
#include<stdio.h>

void sumOfNumber(int num,int arr[]){
    int sum =0;

    for(int i=0; i<num; i++){
        sum += arr[i];
    }

    printf("Sum of the array: %d",sum);
}

int main(){
    int num;

    printf("Enter the Number of Array: ");
    scanf("%d",&num);

    int arr[num];

    printf("Enter the Array Elements: ");
    for(int i=0; i < num; i++){
        scanf("%d",&arr[i]);
    }

    sumOfNumber(num,arr);

    return 0;
}