#include<stdio.h>
#include<conio.h>
void main(){
    int n,digit,sum=0;
    printf("Enter Number To Get Sum Of Each Digit:");
    scanf("%d",&n);
        // digit=n%10;
        // sum+=digit;
        // n=n/10;
        // printf("%d\n",digit);
        // printf("%d\n",n);
        // printf("%d\n",sum);
    while(n!=0)
    {
        digit=n%10;
        sum+=digit;
        n=n/10;
    }
    printf("Sum Of Each Digits Is:%d\n",sum);

}