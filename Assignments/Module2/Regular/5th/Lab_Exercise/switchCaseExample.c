#include<stdio.h>
#include<conio.h>
void main(){
    int choice;
    printf("Enter\n 1 For January \n 2 For February \n 3 For March \n 4 For April \n 5 For May \n 6 For June \n 7 For July \n 8 For Auguest \n 9 For Sepetamber \n 10 For October \n 11 For November \n 12 For December \n Enter:");
    scanf("%d",&choice);
    switch(choice){
        case 1:
            printf("It's January Month");
        break;

        case 2:
            printf("It's February Month");
        break;

        case 3:
            printf("It's March Month");
        break;

        case 4:
            printf("It's April Month");
        break;

        case 5:
            printf("It's May Month");
        break;

        case 6:
            printf("It's June Month");
        break;

        case 7:
            printf("It's July Month");
        break;

        case 8:
            printf("It's Auguest Month");
        break;

        case 9:
            printf("It's Sepetamber Month");
        break;

        case 10:
            printf("It's October Month");
        break;

        case 11:
            printf("It's November Month");
        break;

        case 12:
            printf("It's December Month");
        break;

        default:
            printf("Invalid Month");
        break;
    }
}