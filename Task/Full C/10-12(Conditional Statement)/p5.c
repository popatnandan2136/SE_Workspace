// Write a program of to find out the Area of Triangle, Rectangle and Circle
// using If Condition.(Must Be Menu Driven)
#include<stdio.h>
#include<conio.h>
void main(){
    int choice;
    float area;

    printf("Enter 1 For Area of Triangle \nEnter 2 For For Area of Ractangle \nEnter 3 For For Area of Circle \n");
    scanf("%d",&choice);
    switch(choice){
        case 1:
            {printf("::::::::::::::::::::::::::::::::::::::::::Here We Find Area of Triangle::::::::::::::::::::::::::::::::::::::::::\n");
            float a,b;
            printf("Enter Number a:");
            scanf("%f",&a);
            printf("Enter Number b:");
            scanf("%f",&b);
            float area=0.5*a*b;
            printf("Area Of a Triangle is: %f\n",area);
            break;}
        case 2:
            {printf("::::::::::::::::::::::::::::::::::::::::::Here We Can Find Area of Ractangle::::::::::::::::::::::::::::::::::::::::::\n");
            float w,l;
            printf("Enter Number Width:");
            scanf("%f",&w);
            printf("Enter Number Length:");
            scanf("%f",&l);
            float area=w*l;
            printf("Area Of a Ractangle is: %f\n",area);
            break;}
        case 3:
           { printf("::::::::::::::::::::::::::::::::::::::::::Here We Can Find Area of Circle::::::::::::::::::::::::::::::::::::::::::\n");
            float r,PI=3.14;
            printf("Enter Number Radius:");
            scanf("%f",&r);
            float area=PI*r*r;
            printf("Area Of a Circle is: %f\n",area);
            break;}
        default:
            printf("Invalid Choice");
            break;
    }
}