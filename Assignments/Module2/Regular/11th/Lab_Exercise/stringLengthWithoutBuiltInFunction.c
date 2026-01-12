#include <stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
   char ch[20],len=0;
   printf("Enter String 1:");
   scanf("%s",&ch);
   
   for(int i=0;ch[i]!='\0';i++){
           len++;
   }
   printf("After Combining String Length Is:%d\n",len);
}
