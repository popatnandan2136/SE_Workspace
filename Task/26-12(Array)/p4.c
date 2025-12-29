// Copy Strin Without Function
#include <stdio.h>
#include <conio.h>

void main() {
    int i, count = 1;
    char name[100];
    char cpy[100];

    printf("Enter Your Name: ");
    gets(name);

    for (i = 0; name[i] != '\0'; i++) {
            cpy[i] = name[i];
        }
    printf("After Copy To cpy: %s", cpy);
}