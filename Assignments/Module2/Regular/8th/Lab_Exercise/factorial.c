// Write a C program that calculates the factorial of a number using a function Include function declaration, definition, and call. 
#include <stdio.h>
#include <conio.h>

int factorial(int n){
    int fact=1;
    for(int i=1;i<=n;i++){
        fact = fact*i;
    }
    return fact;
}
void main()
{
    int n;
    printf("Enter Number To Find Facorial:");
    scanf("%d",&n);
    int result = factorial(n);
    printf("Fact: %d",result);
}