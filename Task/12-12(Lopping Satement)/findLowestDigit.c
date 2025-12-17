#include<stdio.h>
#include<conio.h>
void main(){
    int n,digit,lowest;
    printf("Enter Number: ");
    scanf("%d",&n);
    lowest=n;
    while(n>0)
    {
        digit=n%10;
        // printf("\n digit is %d",digit);
        if(digit<lowest)
        {
            lowest=digit;
        }
        n=n/10;
    }
    printf("lowest digit is %d",lowest);
}