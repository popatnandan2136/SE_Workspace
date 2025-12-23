// Accept number of students from user. I need to give 5 apples to each
// student. How many apples are required?
#include<stdio.h>
#include<conio.h>
void main(){
    int n,applePerStudent=5;
    printf("Enter Number Of Students: ");
    scanf("%d",&n);
    printf("Number Of Apples Required Are: %d",applePerStudent*n);
}
