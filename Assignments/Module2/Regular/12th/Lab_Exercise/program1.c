#include <stdio.h>

struct Student {
    char name[50];
    int rollNo;
    float marks;
};

int main() {
    struct Student s[3];
    int i;

    for (i = 0; i < 3; i++) {
        printf("\nEnter details of Student %d\n", i + 1);

        printf("Name: ");
        scanf("%s", s[i].name);

        printf("Roll Number: ");
        scanf("%d", &s[i].rollNo);

        printf("Marks: ");
        scanf("%f", &s[i].marks);
    }

    printf("\n--- Student Details ---\n");
    for (i = 0; i < 3; i++) {
        printf("\nStudent %d\n", i + 1);
        printf("Name       : %s\n", s[i].name);
        printf("Roll No    : %d\n", s[i].rollNo);
        printf("Marks      : %.2f\n", s[i].marks);
    }

    return 0;
}
