// 7. Write a program to calculate sum of 5 subjects & find the percentage.
// Subject marks entered by user.
#include<stdio.h>
#include<conio.h>
void main(){
    float sub1,sub2,sub3,sub4,sub5;
    printf("Enter Marks of Subject 1: ");
    scanf("%f",&sub1);
    printf("Enter Marks of Subject 2: ");
    scanf("%f",&sub2);
    printf("Enter Marks of Subject 3: ");
    scanf("%f",&sub3);
    printf("Enter Marks of Subject 4: ");
    scanf("%f",&sub4);
    printf("Enter Marks of Subject 5: ");
    scanf("%f",&sub5);
    float sum=sub1+sub2+sub3+sub4+sub5;
    float percentage=(sum/500)*100;
    printf("Total Marks: %f\n",sum);
    printf("Percentage: %f",percentage);
}