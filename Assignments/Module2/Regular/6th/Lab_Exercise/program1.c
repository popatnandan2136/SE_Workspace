// WAP to take 10 no. Input from user find out below values 
// a. How many Even numbers are there 
// b. How many odd numbers are there 
// c. Sum of even numbers 
// d. Sum of odd numbers?
#include<stdio.h>
#include<conio.h>
void main(){
    int i=0,n,sumOfEvenNumbers=0,sumOfOddNumbers=0,evenNumber=0,oddNumber=0;
    for(i=1;i<=10;i++){
        printf("Enter Number %d: ",i);
        scanf("%d",&n);
        if(n%2==0){
            evenNumber++;
            sumOfEvenNumbers+=n;
        }
        else{
            oddNumber++;
            sumOfOddNumbers+=n;
        }
    }
    printf("Number Of Even Numbers Are:%d",evenNumber);
    printf("\nNumber Of Odd Numbers Are:%d",oddNumber);
    printf("\nSum Of Even Numbers Are:%d",sumOfEvenNumbers);
    printf("\nSum Of Odd Numbers Are:%d",sumOfOddNumbers);
}