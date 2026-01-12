#include<stdio.h>
#include<conio.h>

void main() {
    int num, temp, digit, count = 0;
    int result = 0, power, i;

    printf("Enter Number: ");
    scanf("%d", &num);

    temp = num;
    while(temp > 0) {
        count++;
        temp = temp / 10;
    }

    temp = num;
    while(temp > 0) {
        digit = temp % 10;

        power = 1;
        for(i = 1; i <= count; i++) {
            power = power * digit;
        }

        result = result + power;
        temp = temp / 10;
    }

    if(result == num){
        printf("Number Is Armstrong");
    }
    else{
        printf("Number Is Not Armstrong");
    }
}
