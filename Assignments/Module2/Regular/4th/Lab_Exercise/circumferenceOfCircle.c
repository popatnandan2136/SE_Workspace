// WAP to Find Area And Circumference of Circle
#include<stdio.h>
#include<conio.h>
void main(){
    float r,PI=3.14;
    printf("Enter Number Radius:");
    scanf("%f",&r);
    float area=PI*r*r;
    printf("Area Of a Circle is: %f",area);
}