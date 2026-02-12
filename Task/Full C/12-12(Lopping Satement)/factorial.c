// ::::::::::::::::: Using While Loop ::::::::::::::::: 
#include<stdio.h>
#include<conio.h>
void main(){
    int n,factorial=1;
    printf("Enter Number: ");
    scanf("%d",&n);
    if(n==0){
        printf("Factoial Of Number = 1");
    }
    else{
        factorial = n;
        while(n!=1)
        {   
            factorial = factorial*(n-1);
            n--;
        }
        printf("Factoial Of Number = %d", factorial);
    }
}

// ::::::::::::::::: Using For Loop ::::::::::::::::: 
// #include<stdio.h>
// #include<conio.h>
// void main(){
//     int n,factorial=1;
//     printf("Enter Number: ");
//     scanf("%d",&n);
//     if(n==0){
//         printf("Factoial Of Number = 1");
//     }
//     else{
//         for(int i=1;i<=n;i++){
//         factorial=factorial*(i);
//        }
//         printf("Factoial Of Number = %d", factorial);
//     }
// }