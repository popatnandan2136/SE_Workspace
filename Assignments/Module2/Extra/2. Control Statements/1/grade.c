#include<stdio.h>
#include<conio.h>

void main() {
    float sub1, sub2, sub3, sub4, sub5;
    float sum, percentage;

    printf("Enter Marks of Subject 1: ");
    scanf("%f", &sub1);

    printf("Enter Marks of Subject 2: ");
    scanf("%f", &sub2);

    printf("Enter Marks of Subject 3: ");
    scanf("%f", &sub3);

    printf("Enter Marks of Subject 4: ");
    scanf("%f", &sub4);

    printf("Enter Marks of Subject 5: ");
    scanf("%f", &sub5);

    sum = sub1 + sub2 + sub3 + sub4 + sub5;
    percentage = (sum / 500) * 100;

    printf("\nTotal Marks: %.2f", sum);
    printf("\nPercentage: %.2f%%", percentage);

    if (percentage >= 90){
        printf("\nGrade: A+");
    }
    else if (percentage >= 80){
        printf("\nGrade: A");
    }
    else if (percentage >= 70){
        printf("\nGrade: B");
    }
    else if (percentage >= 60){
        printf("\nGrade: C");
    }
    else if (percentage >= 50){
        printf("\nGrade: D");
    }
    else{
        printf("\nGrade: Fail");
    }
}
