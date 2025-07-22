#include<stdio.h>
int main(){
    int num1;

    printf("Enter the number: ");
    scanf("%d",&num1);

    int isPrime = 1;
    for(int i=2;i<num1;i++){
        if(num1%i == 0){
            isPrime = 0;
            break;
        }
    }
    
    if(isPrime){
        printf("%d is Prime Number\n",num1);
    }else{
        printf("%d is not Prime Number\n",num1);
    }
    return 0;
}