#include<stdio.h>
#include<conio.h>
void main(){
    int a,b,c,temp;
    printf("Enter Number a:");
    scamf("%d",&a);
    printf("Enter Number b:");
    scamf("%d",&b);
    printf("Enter Number c:");
    scamf("%d",&c);

    int max = (a>b)?((a>c)?printf("Max Is A"):printf("Max Is C")):((b>c)?printf("Max Is B"):printf("Max Is C"));


}