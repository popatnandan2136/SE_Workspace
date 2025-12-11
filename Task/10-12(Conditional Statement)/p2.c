// Write a Program to check the given year is leap year or not.
#include<stdio.h>
#include<conio.h>
void main(){
    int year;
    printf("Enter Year To Check Whather It's leap Year or Not: ");
    scanf("%d",&year);
    if(((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0))
    {
        printf("It's leap year");
    }
    else{
        printf("It's Not a leap Year");
    }
}