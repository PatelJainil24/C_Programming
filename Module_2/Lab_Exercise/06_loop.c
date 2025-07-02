/*
Q.Write a C program to print numbers from 1 to 10 using all three types of loops 
(while, for, do-while). 
*/

#include<stdio.h>

int main(){

    //while loop...
    printf("While Loop: ");
    int i=0;
    while(i<10){
        printf("%d ",i+1);
        i++;
    }

    printf("\n");
    //for loop...
    printf("For Loop: ");
    for(int j=0;j<10;j++){
        printf("%d ",j+1);
    }
    return 0;

    printf("\n");
}