/*
Q.Write a C program that uses the break statement to stop printing numbers 
when it reaches 5. Modify the program to skip printing the number 3 using the 
continue statement.
*/

#include<stdio.h>

int main(){

    int i=0;
    while(i<10){

        if(i+1 !=5){
            printf("%d ",i+1);
            
        }else{
            printf("break the loop i == 5");
            break;
        }
        i++;
    }

    return 0;
}