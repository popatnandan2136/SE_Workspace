#include<stdio.h>
#include<conio.h>
void main(){
    int marks[5],total=0;
    float percentage=0.0;
    for(int i=0;i<5;i++){
        printf("Enter Marks Of Subjact %d:",i+1);
        scanf("%d",&marks[i]);
        total+=marks[i];
    }
    percentage = total/5;
    printf("Your Total Marks Is: %d\n",total);
    printf("Your Percentage is: %.2f",percentage);
}