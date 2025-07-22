/*
Q.Write a C program that takes two strings from the user and concatenates them 
using strcat(). Display the concatenated string and its length using 
strlen().
*/

#include<stdio.h>
#include<string.h>

int main(){

    char str[50] = "Patel";
    char strC[] = " Jainil";

    strcat(str,strC);

    printf("Concatenated string: %s\n", str);
    printf("string Length: %lu\n", strlen(str));

    return 0;
}