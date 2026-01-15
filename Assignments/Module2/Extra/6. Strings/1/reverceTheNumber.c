#include<stdio.h>
#include<string.h>
void main(){
    char str[50];
    printf("Enter String: ");
    scanf("%s",&str);

    printf("Reversed Number Is: %s",strrev(str));
}