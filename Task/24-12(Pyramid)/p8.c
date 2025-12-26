//   * * * * *
//    * * * *
//     * * *
//      * *
//       *
#include<stdio.h>
#include<conio.h>
void main(){
    int i,j;
    for(i=5;i>=1;i--){
        for(int space=0;space<=5-i;space++){
            printf(" ");
        }
        for(j=1;j<=i;j++){
            printf(" *");
        }
        printf("\n");
    }
}