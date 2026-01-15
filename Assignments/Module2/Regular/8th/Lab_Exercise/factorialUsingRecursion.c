#include<stdio.h>
#include<conio.h>
int factorial(int n){
    if(n==0 || n==1){
        return 1;
    }
    else{
        return n * factorial(n-1);
    }
}
void main(){
    int num,result;
    printf("Enter Number To Find Factorial Of Number:");
    scanf("%d",&num);
    result = factorial(num);
    printf("Your Factorial Of Number Is:%d",result);
}