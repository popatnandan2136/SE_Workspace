// left to right
// 1
// 44
// 999
// 16161616
// 2525252525
#include<stdio.h>
void main(){
    int i,j,num;
    printf("Enter Number: ");
    scanf("%d",&num);
    for(i=1;i<=num;i++)
    {
        for(j=1;j<=i;j++){
            printf("%d",(i*i));
        }
        printf("\n");
    }
}