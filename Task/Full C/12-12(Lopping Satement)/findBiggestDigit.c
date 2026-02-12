#include<stdio.h>
#include<conio.h>
void main(){
    int n,digit,biggest=0;
    printf("Enter Number: ");
    scanf("%d",&n);
    while(n>0)
    {
        digit=n%10;
        // printf("\n digit is %d",digit);
        if(digit>biggest)
        {
            biggest=digit;
        }
        n=n/10;
    }
    printf("biggest is %d",biggest);
}