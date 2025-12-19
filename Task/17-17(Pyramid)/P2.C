// left to right
// 1
// 22
// 333
// 4444
// 55555
#include<stdio.h>
#include<conio.h>
void main(){
    int n;
    printf("Enter num: ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)//row
    {
        for(int j=1;j<=i;j++)//col
        {
            printf("%d",i);
        }
        printf("\n");
    }
}