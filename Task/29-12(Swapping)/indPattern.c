#include<stdio.h>
#include<conio.h>
int main(){
    char ind[10]="INDIA";
    for(int i=0;i<=5;i++){
        for(int j=0;j<i;j++){
            printf("%c",ind[j]);
        }
        printf("\n");
    }
}