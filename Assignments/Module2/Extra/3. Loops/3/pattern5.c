// A
// AB
// ABC
// ABCD
// ABCDE
#include<stdio.h>
#include<conio.h>
void main(){
    int n;
    printf("Enter num: ");
    scanf("%d",&n);
    if(n>26){
        printf("Number not grater than 26");
    }
    else{
        for(int i=1;i<=n;i++)//row
        {
            char ch = 'A';
            for(int j=1;j<=i;j++)//col
            {
                printf("%c",ch);
                ch++;
                // printf("%c",64+i);
            }
        printf("\n");
    }
    }
    
}