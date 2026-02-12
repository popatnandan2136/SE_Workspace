//     1
//    21
//   321
//  4321
// 54321
#include<stdio.h>
#include<conio.h>
void main(){
    int i,j,space=1;
    for(i=1;i<=5;i++){
        for(space=1;space<=5-i;space++){
            printf(" ");
        }
        int var=i;
        for(j=1;j<=i;j++){
            printf("%d",var);
            var--;
        }
        printf("\n");
    }
}