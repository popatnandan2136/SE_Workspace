#include<stdio.h>
#include<conio.h>
void main(){
    int n,digit,reverse=0;
    printf("Enter Number: ");
    scanf("%d",&n);
    while(n!=0)
    {
        digit=n%10;
        printf("\n%d ",digit);
        reverse = (reverse*10)+digit;
        printf("\n\n%d",reverse);
        n = n/10;
    }
    printf("Reversed number = %d", reverse);
}