// Write a C program that accepts two integers from the user and performs
// arithmetic, relational, and logical operations on them. Display the results.
#include<stdio.h>
#include<conio.h>
void main(){
    int n;
    printf("Enter Number: ");
    scanf("%d",&n);
    if(n>0){
        printf("Number Is Positive");
    }
    else{
        printf("Number Is Negative");
    }
}