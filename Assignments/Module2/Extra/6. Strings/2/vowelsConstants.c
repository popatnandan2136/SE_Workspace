#include <stdio.h>
#include <ctype.h>

int main() {
    char str[200];
    int i;
    int vowels = 0, consonants = 0, digits = 0, special = 0;

    printf("Enter a string: ");
    gets(str);

    for (i = 0; str[i] != '\0'; i++) {

        if (isalpha(str[i])) {
            char ch = tolower(str[i]);
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
                vowels++;
            } else {
                consonants++;
            }
        }
        else if (isdigit(str[i])) {
            digits++;
        }
        else if (str[i] != ' ') {
            special++;
        }
    }

    printf("\nVowels: %d", vowels);
    printf("\nConsonants: %d", consonants);
    printf("\nDigits: %d", digits);
    printf("\nSpecial Characters: %d", special);

    return 0;
}
