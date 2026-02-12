#include<stdio.h>
#include<conio.h>
void main(){
    int n;
    printf("Enter Number To Get Table Of That Number:");
    scanf("%d",&n);

    for(int i=1;i<=10;i++){
        printf("%d X %d = %d\n",n,i,(n*i));
    }
}