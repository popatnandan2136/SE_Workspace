// left to right
// 1
// 23
// 456
// 78910
#include<stdio.h>
void main(){
    int i,j,num,count=1;
    printf("Enter Number: ");
    scanf("%d",&num);
    for(i=1;i<=num;i++){
        for(j=1;j<=i;j++){
            printf("%d",count);
            count++;
        }
        printf("\n");
    }
}

// left to right
// 1
// 23
// 456
// 7891
// 23456

// #include<stdio.h>
// void main(){
//     int i,j,num,count=1;
//     printf("Enter Number: ");
//     scanf("%d",&num);
//     for(i=1;i<=num;i++){
//         for(j=1;j<=i;j++){
//             if(count>9){
//                 count=1;
//                 printf("%d",count);
//                 count++;
//             }
//             else{
//                 printf("%d",count);
//                 count++;
//             }
//         }
//         printf("\n");
//     }
// }