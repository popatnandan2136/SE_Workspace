// Write a C program that uses the break statement to stop printing numbers
// when it reaches 5. Modify the program to skip printing the number 3 using the
// continue statement.
#include<stdio.h>
#include<conio.h>
void main(){
    int n=1;
    while(n!=50){
        if(n>5){
            break;
        }
        if(n==3){
            continue;
            printf("%d\n",n);
        }
        else{
            printf("%d\n",n);
        }
        n++;
    }
}