#include <stdio.h>

int main() {
    int a, b, c;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    switch ((a >= b && a >= c) ? 1 : (b >= a && b >= c) ? 2 : 3) {
        case 1:
            printf("\nLargest number: %d", a);
            break;
        case 2:
            printf("\nLargest number: %d", b);
            break;
        case 3:
            printf("\nLargest number: %d", c);
            break;
    }
    switch ((a <= b && a <= c) ? 1 : (b <= a && b <= c) ? 2 : 3) {
        case 1:
            printf("\nSmallest number: %d", a);
            break;
        case 2:
            printf("\nSmallest number: %d", b);
            break;
        case 3:
            printf("\nSmallest number: %d", c);
            break;
    }

    return 0;
}
