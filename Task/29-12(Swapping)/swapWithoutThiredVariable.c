#include<stdio.h>
#include<conio.h>
void main(){
    int a=10,b=20,c;
    printf("Before Swapping Value Of a is %d and value of b is %d",a,b);
    a*=b;
    b=a/b;
    a/=b;

    // a+=b;
    // b=a-b;
    // a-=b
    printf("\nAfter Swapping Value Of a is %d and value of b is %d",a,b);
}