// 6. Write a program to find the simple Interest.
#include<stdio.h>
#include<conio.h>
void main(){
    float p,r,t;
    printf("Enter Principal Amount: ");
    scanf("%f",&p);
    printf("Enter Rate of Interest: ");
    scanf("%f",&r);
    printf("Enter Time: ");
    scanf("%f",&t);
    float si=(p*r*t)/100;
    printf("Simple Interest is: %f\n",si);
    printf("Your Payable Amount Is: %f",p+si);
}