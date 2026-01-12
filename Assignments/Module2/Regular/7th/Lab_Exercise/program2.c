// Calculate the Sum of Natural Numbers Using the While Loop
#include<stdio.h>
#include<conio.h>
void main(){
    int n,sum=0,start=1;
    printf("Enter Number: ");
    scanf("%d",&n);
    while(start<=n){
        sum = sum + start;
        start++;
    }
    printf("Sum Of Natural Number Is: %d",sum);
}