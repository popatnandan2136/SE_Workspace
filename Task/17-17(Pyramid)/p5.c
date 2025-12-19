// left to right
// 1
// 22
// 333
// 4444
// 55555

#include <stdio.h>
void main()
{
    int i,j,num;
    printf("enter num: ");
    scanf("%d",&num);
    for(i=1;i<=num;i++)//row
    {
        for(j=1;j<=i;j++)//col
        {
             printf("%d",i);
        }
        printf("\n");
    }
}