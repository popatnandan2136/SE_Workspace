// Write a C program that stores 5 integers in a one-dimensional array and prints them.
// Extend this to handle a two-dimensional array (3x3 matrix) and calculate the sum of all elements.	 

#include <stdio.h>
#include <conio.h>
#include <string.h>
void main()
{
   
  int arr[5];
  int sum=0,i,j;
   
  for(i=0;i<5;i++){
      printf("Enter Number %d:",i+1);
      scanf("%d",&arr[i]);
  }
  for(i=0;i<5;i++){
      printf("Number: %d: %d\n",i+1,arr[i]);
  }
}
    