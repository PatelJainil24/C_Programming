/*
Q.Write a C program that defines a structure to store a student's details (name, 
roll number, and marks). Use an array of structures to store details of 3 
students and print them.
*/
#include<stdio.h>
#include <string.h>  // Required for strcpy()
typedef struct Student{
    char name[20];
    int rollNumber;
    float marks;
}Student;


int main(){

    Student str[3];

    // One way to enter the student data:   
    // strcpy(str[0].name,"jainil");
    // str[0].rollNumber = 1;
    // str[0].marks = 345;

    // printf("%s\n",str[0].name);
    // printf("%d\n",str[0].rollNumber);
    // printf("%f\n",str[0].marks);

    // Second

    printf("Enter the three student Data: \n");

    for(int i=0; i<3; i++){
        scanf("%s %d %f",str[i].name,&str[i].rollNumber,&str[i].marks);
    }

    printf("\n");

    for(int i=0; i<3; i++){
        printf("Name: %s, RollNumber: %d, Marks: %f\n",str[i].name,str[i].rollNumber,str[i].marks);
    }

    return 0;
}