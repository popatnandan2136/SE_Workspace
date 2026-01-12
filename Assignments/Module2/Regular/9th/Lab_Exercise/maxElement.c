// Find max element from the array 

#include <stdio.h>
#include <conio.h>
#include <string.h>
void main()
{
   
  int arr[5];
  int sum=0,i,j,max=0;
   
  for(i=0;i<5;i++){
      printf("Enter Number %d:",i+1);
      scanf("%d",&arr[i]);
    }
  for(i=0;i<5;i++){
        if(max<arr[i]){
            max = arr[i];
        }
    }
    printf("Largest Number Is From Array Is:%d",max);
}

    