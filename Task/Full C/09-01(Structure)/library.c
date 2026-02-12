#include <stdio.h>
#include <conio.h>
#include <stdbool.h>

struct Book {
    int bookId;
    char bookName[50];
    bool isIssued;
};

struct Library {
    int count;
    struct Book books[50];
};

void main() {
    struct Library lib;
    lib.count = 0;

    int choice, i, bookID;
    bool found;

    while (true) {
        printf("\n\n--- Library Menu ---");
        printf("\n1. Add Book");
        printf("\n2. Display Books");
        printf("\n3. Issue Book");
        printf("\n4. Return Book");
        printf("\n5. Exit");

        printf("\nEnter choice: ");
        scanf("%d", &choice);

        switch (choice) {

        case 1:
            if (lib.count < 50) {
                printf("Enter Book ID: ");
                scanf("%d", &lib.books[lib.count].bookId);

                printf("Enter Book Name: ");
                scanf("%s", lib.books[lib.count].bookName);

                lib.books[lib.count].isIssued = false;
                lib.count++;

                printf("Book Added...");
            } else {
                printf("Library Is Full");
            }
            break;

        case 2:
            if (lib.count > 0) {
                for (i = 0; i < lib.count; i++) {
                    printf("\nBook ID: %d , Book Name: %s , Status:%s",
                           lib.books[i].bookId,
                           lib.books[i].bookName,
                           lib.books[i].isIssued==0?"Available":"False"
                        );
                }
            } else {
                printf("No Books Available");
            }
            break;

        case 3:
            printf("Enter Book ID: ");
            scanf("%d", &bookID);

            found = false;
            for (i = 0; i < lib.count; i++) {
                if (bookID == lib.books[i].bookId) {
                    found = true;
                    if (!lib.books[i].isIssued) {
                        lib.books[i].isIssued = true;
                        printf("Book Issued Successfully");
                    } else {
                        printf("Book Is Already Issued");
                    }
                    break;
                }
            }
            if (!found) {
                printf("Book Not Found");
            }
            break;

        case 5:
            return;

        default:
            printf("Invalid Choice");
        }
    }
}
