#include <stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
   char ch[20],ch2[30];
   printf("Enter String 1:");
   scanf("%s",&ch);
   printf("Enter String 2:");
   scanf("%s",&ch2);
   
   printf("Your String 1 Is:%s\n",&ch);
   printf("Your String 2 Is:%s\n",&ch2);
   printf("After Combining String Is:%s\n",strcat(ch,ch2));
   printf("After Combining String Length Is:%d\n",strlen(ch));
}
