#include <stdio.h>

void main()
{
    int a = 20;
    int *ptr;

    ptr = &a;

    printf("Initial value of a: %d\n", a);
    printf("Address of a: %p\n", &a);
    printf("Pointer stores address: %p\n", ptr);
    printf("Value using pointer (*ptr): %d\n", *ptr);
    
    *ptr = 50;

    printf("\nAfter modifying value using pointer:\n");
    printf("Value of a: %d\n", a);
    printf("Value using pointer (*ptr): %d\n", *ptr);
}
