// 1
// 10
// 101
// 1010
// 10101
#include<stdio.h>
#include<conio.h>
void main(){
    int i,j,zero=0,one=1;
    for(i=1;i<=5;i++){
        for(j=1;j<=i;j++){
            if(j%2==0){
                printf("%d",zero);
            }
            else{
                printf("%d",one);
            }
        }
        printf("\n");
    }
}