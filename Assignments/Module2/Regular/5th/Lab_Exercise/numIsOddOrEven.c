#include<stdio.h>
#include<conio.h>
void main(){
    int a;
    printf("Enter Number: ");
    scanf("%d",&a);
    if(a%2==0){
        printf("Number Is Even");
    }
    else{
        printf("Number Is Odd");
    }
}