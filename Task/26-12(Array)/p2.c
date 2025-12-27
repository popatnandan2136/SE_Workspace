// Number Of Letters Without Built In Function
#include<stdio.h>
#include<conio.h>
void main(){
    int i,count=0;
    char name[100]="";
    printf("Enter Your Name:");
    scanf("%s",&name);
    for(i=0;i<100;i++){
        if(name[i]==('\0')){
            continue;
        }
        else{
            count++;
        }
    }
    printf("Number Of Letters Are: %d",count);
}