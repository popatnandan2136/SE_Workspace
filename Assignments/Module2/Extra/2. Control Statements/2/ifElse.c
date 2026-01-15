#include <stdio.h>

int main() {
    int a, b, c;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    if (a >= b && a >= c){
        printf("\nLargest number: %d", a);
    }
    else if (b >= a && b >= c){
        printf("\nLargest number: %d", b);
    }
    else{
        printf("\nLargest number: %d", c);
    }

    if (a <= b && a <= c){
        printf("\nSmallest number: %d", a);
    }
    else if (b <= a && b <= c){
        printf("\nSmallest number: %d", b);
    }
    else{
        printf("\nSmallest number: %d", c);
    }
}
