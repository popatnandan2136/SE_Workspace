#include <stdio.h>

int main() {
    int arr[10];
    int i, j, max, min, temp;

    printf("Enter 10 integers:\n");
    for (i = 0; i < 10; i++){
        scanf("%d", &arr[i]);
    }

    max = min = arr[0];

    for (i = 1; i < 10; i++){
        if (arr[i] > max){
            max = arr[i];
        }
        if (arr[i] < min){
            min = arr[i];
        }
    }

    printf("\nMaximum value: %d", max);
    printf("\nMinimum value: %d", min);

    for (i = 0; i < 9; i++){
        for (j = 0; j < 9 - i; j++) {
            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    printf("\n\nArray in Ascending Order:\n");
    for (i = 0; i < 10; i++){
        printf("%d ", arr[i]);
    }

    return 0;
}
