#include <stdio.h>
#include <conio.h>
void main()
{
   
  int arr[3][3],arr2[3][3],sumArray[3][3];
  int sum=0,i,j;
   
  for(i=0;i<3;i++){
    for(j=0;j<3;j++){
        printf("Enter Number For Array 1 [%d][%d]:",i+1,j+1);
        scanf("%d",&arr[i][j]);
    }
  }
  for(i=0;i<3;i++){
    for(j=0;j<3;j++){
        printf("Enter Number For Array 2 [%d][%d]:",i+1,j+1);
        scanf("%d",&arr2[i][j]);
    }
  }
  for(i=0;i<3;i++){
    for(j=0;j<3;j++){
        sumArray[i][j] = arr[i][j]+arr2[i][j];
    }
  }
  printf("\nSum of two matrices:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("%d ", sumArray[i][j]);
        }
        printf("\n");
    }
}
    