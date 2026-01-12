// WAP to accept 5 numbers from user and display in reverse order using for loop and array 
#include <stdio.h>
#include <conio.h>
void main()
{
    int i=0,n;
    printf("Enter How Many Numbers: ");
    scanf("%d",&n);
    int num[n];
    for(i=0;i<=n;i++){
        printf("Enter Number %d:",i+1);
        scanf("%d",&num[i]);
    }
    for(i=n;i>=0;i--)
    {
        printf("%d,",num[i]);
    }
}