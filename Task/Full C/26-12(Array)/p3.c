// Number Of Words Without Function
#include <stdio.h>
#include <conio.h>

void main() {
    int i, count = 1;
    char name[100];

    printf("Enter Your Name: ");
    gets(name);

    for (i = 0; name[i] != '\0'; i++) {
        if (name[i] == ' ') {
            count++;
        }
    }
    printf("Number Of Words Are: %d", count);
    getch();
}
