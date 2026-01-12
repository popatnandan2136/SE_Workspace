// WAP to reverse a string and check that the string is palindrome or no
#include <stdio.h>
#include <conio.h>
#include <string.h>
void main()
{
    char ch[20],rev[20];
    int i=0,j=0;
    printf("Enter String:");
    scanf("%s",&ch);
    for(i=strlen(ch)-1;i>=0;i--){
        rev[j] = ch[i];
        j++;
    }
    // printf("rev: %s",rev);
    // printf("ch: %s",ch); 
    if(strcmp(rev,ch)==0){
        printf("String Is Pelindrome");
    }
    else{
        printf("String Is Not Pelindrome");
    }
}
    