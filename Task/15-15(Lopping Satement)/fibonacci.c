#include<stdio.h>
#include<conio.h>
void main(){
    int n,first=0,second=1,next;
    printf("Enter Number:");
    scanf("%d",&n);
    printf("fibonacci Series: ");
    for(int i=0;i<n;i++){
        if(i<=1){
            next=i;
        }
        else{
            next=first+second;
            first=second;
            second=next;
        }
        printf("%d+",next);
    }
    printf("\n");
}