// Write a C program that accepts two integers from the user and performs
// arithmetic, relational, and logical operations on them. Display the results.
#include<stdio.h>
#include<conio.h>
void main(){
    float a,b;
    printf("Enter Number a: \n");
    scanf("%f",&a);
    printf("Enter Number b: \n");
    scanf("%f",&b);

    printf("::::::::::::: Arithmetic Operators :::::::::::::")
    printf("Sum Of a and b is: %f",a+b);
    printf("\nSubtraction Of a and b is: %f",a+b);
    printf("\nMultiplication Of a and b is: %f",a+b);
    printf("\nDivision Of a and b is: %f",a+b);
}