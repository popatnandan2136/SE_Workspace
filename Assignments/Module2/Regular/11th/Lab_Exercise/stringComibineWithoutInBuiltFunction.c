#include <stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
   char ch[40],ch2[30];
   int len=0,lench2=0;
   printf("Enter String 1:");
   scanf("%s",ch);
   printf("Enter String 2:");
   scanf("%s",ch2);
   
   for(int i=0;ch[i]!='\0';i++){
           len++;
   }
   for(int i=len;ch2[lench2]!='\0';i++){
       ch[i] = ch2[lench2];
       lench2++;
   }
   ch[len + lench2] = '\0';
   printf("After Combining String Is:%s\n",ch);
}
