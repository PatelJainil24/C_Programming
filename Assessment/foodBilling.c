#include<stdio.h>

void FoodList(){
    int choos,qut;
    int amount =0;
    
    printf("1. Pizza  Price = 180rs/pcs\n"
       "2. Burger Price = 100rs/pcs\n"
       "3. Dosa   Price = 120rs/pcs\n"
       "4. Idli   Price = 50rs/pcs\n");

    printf("Please Enter your choose...:");
    scanf("%d",&choos);

    char conti;
    
    if(choos == 1){
        printf("You have selected pizza.\n");
        printf("Enter the quantity: ");
        scanf("%d",&qut);
        printf("\n");

        amount = qut*180;
        totalAmount += amount; 

        printf("Amount: %d\n",amount);
        printf("Total Amount: %d\n",totalAmount);

        printf("Do you want place more orders ? y & n: ");
        scanf(" %c",&conti);

        if (conti == 'y' || conti == 'Y') {
            FoodList();  
        } else {
            printf("Thanks for visiting !!!\n");
        }
    }
}



int main(){
    
    FoodList();
    return 0;
}