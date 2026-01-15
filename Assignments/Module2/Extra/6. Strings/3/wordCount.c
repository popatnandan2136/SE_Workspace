#include <stdio.h>
#include <string.h>

int main() {
    char str[200], word[50], longest[50];
    int i = 0, j = 0, words = 0, maxLen = 0;

    printf("Enter a sentence: ");
    gets(str);

    while (1) {
        if (str[i] == ' ' || str[i] == '\0') {
            if (j > 0) {
                word[j] = '\0';
                words++;

                if (j > maxLen) {
                    maxLen = j;
                    strcpy(longest, word);
                }
                j = 0;
            }
            if (str[i] == '\0')
                break;
        }
        else {
            word[j++] = str[i];
        }
        i++;
    }

    printf("\nNumber of words: %d", words);
    printf("\nLongest word: %s", longest);
}
