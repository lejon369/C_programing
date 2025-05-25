#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAX_WORDS 1000
#define MAX_LENGTH 50

int main() {
    FILE *file;
    char word[MAX_LENGTH];
    char words[MAX_WORDS][MAX_LENGTH];
    int counts[MAX_WORDS] = {0};
    int total_words = 0;
    int i, found;

    file = fopen("input.txt", "r");
    if (file == NULL) {
        printf("Cannot open file.\n");
        return 1;
    }

    while (fscanf(file, "%49s", word) == 1) {
        // Convert to lowercase for case-insensitive counting
        for (i = 0; word[i]; i++) {
            word[i] = tolower(word[i]);
        }

        found = 0;
        for (i = 0; i < total_words; i++) {
            if (strcmp(words[i], word) == 0) {
                counts[i]++;
                found = 1;
                break;
            }
        }

        if (!found && total_words < MAX_WORDS) {
            strcpy(words[total_words], word);
            counts[total_words] = 1;
            total_words++;
        }
    }

    fclose(file);

    printf("Word occurrences:\n");
    for (i = 0; i < total_words; i++) {
        printf("%s : %d\n", words[i], counts[i]);
    }

    return 0;
}
