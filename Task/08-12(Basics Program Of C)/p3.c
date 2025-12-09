// 3. Write a program to make a square and cube of number.
#include<stdio.h>
#include<conio.h>
void main(){
    float a,b;
    printf("Enter Number For Square: ");
    scanf("%f",&a);
    printf("Enter Number For Cube: ");
    scanf("%f",&b);
    float sq=a*a;
    float cube=b*b*b;
    printf("Suare Of %f",a," is:%f",sq);
    printf("Cube Of %f",b," is:%f",cube);
}