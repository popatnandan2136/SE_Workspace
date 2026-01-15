#include<stdio.h>
#include<conio.h>
void main(){
    char productName[50];
    int wholsalePrice,sellingPrice,profitOrLoss;
    printf("Enter Product Name:");
    scanf("%s",&productName);
    printf("Enter WholeSale Price Of An Product:");
    scanf("%d",&wholsalePrice);

    printf("Enter Selling Price Of An Product:");
    scanf("%d",&sellingPrice);

    profitOrLoss = sellingPrice-wholsalePrice;

    if(profitOrLoss>0){
        printf("Your Profit on %s Is %d",productName,profitOrLoss);
    }
    else if(profitOrLoss<0){
        printf("Your Profit on %s Is %d",productName,profitOrLoss);
    }
    else{
        printf("You Have NoProfit or No Loss on %s");
    }
}