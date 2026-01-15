// 1 
// 2 3 
// 4 5 6 
// 7 8 9 10 
// 11 12 13 14 15 
#include <stdio.h>
void main()
{
    int i,j,num,n=1;
    printf("enter num: ");
    scanf("%d",&num);
    for(i=1;i<=num;i++)//row
    {
        for(j=1;j<=i;j++)//col
        {
            printf("%d ",n);
            n++;
        }
        printf("\n");
    }
}