#include <stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
   char ch[40],ch2[30];
   int len=0,lench2=0;
   printf("Enter String 1:");
   scanf("%s",ch);
   
   for(int i=0;ch[i]!='\0';i++){
           len++;
   }
   for(int i=len-1;i>=0;i--){
       ch2[lench2] = ch[i];
       lench2++;
   }
   ch2[lench2] = '\0';
   if(strcmp(ch,ch2)==0){
       printf("String Is pelindrome");
   }
   else{
       printf("String Is Not Pelindrome");
   }
}
