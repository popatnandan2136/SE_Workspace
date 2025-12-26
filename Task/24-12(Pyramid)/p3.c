//      1 
//     2 2
//    3 3 3
//   4 4 4 4
//  5 5 5 5 5
#include<stdio.h>
#include<conio.h>
void main(){
    int i,j,space=0;
    for(i=1;i<=5;i++){
        for(space=0;space<=5-i;space++){
            printf(" ");
        }
        for(j=1;j<=i;j++){
            printf("%d ",i);
        }
        printf("\n");
    }
}