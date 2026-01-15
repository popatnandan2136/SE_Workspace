// *
// **
// ***
// ****
// *****
// ******
// *****
// ****
// ***
// **
// *
#include <stdio.h>
#include<conio.h>
void main()
{
    int i,j,num;
    printf("enter num: ");
    scanf("%d",&num);
    for(i=1;i<=num;i++)//row
    {
        for(j=1;j<=i;j++)//col
        {
             printf("*");
        }
        printf("\n");
    }
    for(i=num;i>=1;i--)//row
    {
        for(j=i-1;j>=1;j--)//col
        {
             printf("*");
        }
        printf("\n");
    }
}