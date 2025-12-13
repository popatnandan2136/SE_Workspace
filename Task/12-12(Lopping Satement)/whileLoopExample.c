#include<stdio.h>
#include<conio.h>
#include<stdbool.h>
void main()
{
    int choice;
    int billAmount=0;
    int pizzaQuantity=1,burgerQuantity=1,coffeeQuantity=1;
    // printf("Enter 1 To Order Pizza \nEnter 2 To Oreder Burger \nEnter 3 To Order Coffee \nEnter 4 To Exit\n");
    // scanf("%d",&choice);
    
    while(true)
    {
        printf("Enter 1 To Order Pizza \nEnter 2 To Oreder Burger \nEnter 3 To Order Coffee \nEnter 4 To Exit\n");
        scanf("%d",&choice);
      
        switch(choice)
        {
            case 1:
            printf("Enter Quantity Of Pizza:");
            scanf("%d",&pizzaQuantity);
            if(pizzaQuantity==0)
            {
                printf("You Can't Get 0 Items");
                break;
            }
            billAmount+=pizzaQuantity*100;
            printf("After Buying %d Pizza Your Bill Amount Is: %d\n",pizzaQuantity,billAmount);
            break;
        case 2:
            printf("Enter Quantity Of Burger:");
            scanf("%d",&burgerQuantity);
            if(burgerQuantity==0)
            {
                printf("You Can't Get 0 Items");
                break;
            }
            billAmount+=burgerQuantity*70;
            printf("After Buying %d Burger Your Bill Amount Is: %d",burgerQuantity,billAmount);
            break;
        case 3:
            printf("Enter Quantity Of Coffee:");
            scanf("%d",&coffeeQuantity);
            if(coffeeQuantity==0)
            {
                printf("You Can't Get 0 Items");
                break;
            }
            billAmount+=coffeeQuantity*120;
            printf("After Buying %d Coffee Your Bill Amount Is: %d",coffeeQuantity,billAmount);
            break;
        case 4:
            break;
        default:
            printf("Product Not Available");
            break;
        }
    }
}