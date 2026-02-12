// left to right
// A
// AB
// ABC
// ABCD
// ABCDE
#include<stdio.h>
#include<conio.h>
void main(){
    int n;
    // char ch = 'A';
    printf("Enter num: ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        char ch = 'A';
        for(int j=1;j<=i;j++){
                printf("%c",ch);
                // printf("%c",64+i);
                ch++;
            }
            printf("\n");
        }
}
    