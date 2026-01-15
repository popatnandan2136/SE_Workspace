#include<stdio.h>
#include<conio.h>
void main(){
    int choice;
    float a,b,ans;
    printf("Enter 1 For Addition \nEnter 2 For Subtraction \nEnter 3 For Multiplication \nEnter 4 For Division \n");
    scanf("%d",&choice);
    printf("Enter a:");
    scanf("%f",&a);
    printf("Enter b:");
    scanf("%f",&b);
    switch(choice){
        case 1:
        printf("::::::::::::::::::::::::::::::::::::::::::Here We Can Do Addition::::::::::::::::::::::::::::::::::::::::::\n");
        ans = a + b;
        printf("Addition Of %.2f and %.2f is:%.2f ",a,b,ans);
        break;
        case 2:
        printf("::::::::::::::::::::::::::::::::::::::::::Here We Can Do Subtraction::::::::::::::::::::::::::::::::::::::::::\n");
        ans = a - b;
        printf("Subtraction Of %.2f and %.2f is:%.2f ",a,b,ans);
        break;
        case 3:
        printf("::::::::::::::::::::::::::::::::::::::::::Here We Can Do Multiplication::::::::::::::::::::::::::::::::::::::::::\n");
        ans = a * b;
        printf("Multiplication Of %.2f and %.2f is:%.2f ",a,b,ans);
        break;
        case 4:
        printf("::::::::::::::::::::::::::::::::::::::::::Here We Can Do Division::::::::::::::::::::::::::::::::::::::::::\n");
        ans = a / b;
        printf("Division Of %.2f and %.2f is:%.2f ",a,b,ans);
        break;
        default:
        printf("Invalid Choice");
        break;
    }
}