#include <stdio.h>
#include <string.h>

#define MAX 1000

int main() {
    FILE *file;
    char text[MAX], temp[MAX], word[50], replace[50];
    int i = 0, j = 0, k, found;

    printf("Enter word to find: ");
    scanf("%s", word);
    printf("Enter word to replace with: ");
    scanf("%s", replace);

    // Open the file in read mode
    file = fopen("input.txt", "r");
    if (file == NULL) {
        printf("Unable to open file.\n");
        return 1;
    }

    // Read the whole file content into 'text'
    while ((text[i] = fgetc(file)) != EOF) {
        i++;
    }
    text[i] = '\0';
    fclose(file);

    i = 0;

    // Process the text for find and replace
    while (text[i] != '\0') {
        // Check if word matches at this position
        found = 1;
        for (k = 0; word[k] != '\0'; k++) {
            if (text[i + k] != word[k]) {
                found = 0;
                break;
            }
        }

        if (found) {
            // Replace word
            for (k = 0; replace[k] != '\0'; k++) {
                temp[j++] = replace[k];
            }
            i += strlen(word);
        } else {
            temp[j++] = text[i++];
        }
    }
    temp[j] = '\0';

    // Write the modified content back to file
    file = fopen("input.txt", "w");
    if (file == NULL) {
        printf("Unable to open file.\n");
        return 1;
    }
    fputs(temp, file);
    fclose(file);

    printf("Word replaced successfully.\n");

    return 0;
}
/*
#include <stdio.h>
#include <string.h>

int main() {
    FILE *file;
    char text[1000], word[50], replace[50];
    char buffer[1000];
    int found = 0;

    printf("Enter word to find: ");
    scanf("%s", word);
    printf("Enter word to replace with: ");
    scanf("%s", replace);

    file = fopen("input.txt", "r");
    if (file == NULL) {
        printf("Cannot open file.\n");
        return 1;
    }

    buffer[0] = '\0';

    // Read file line by line
    while (fgets(text, sizeof(text), file) != NULL) {
        char *pos = strstr(text, word);
        if (pos != NULL) {
            found = 1;
            // Copy part before the word
            *pos = '\0';
            strcat(buffer, text);
            strcat(buffer, replace);
            strcat(buffer, pos + strlen(word));
        } else {
            strcat(buffer, text);
        }
    }

    fclose(file);

    if (!found) {
        printf("Word not found.\n");
        return 0;
    }

    file = fopen("input.txt", "w");
    fputs(buffer, file);
    fclose(file);

    printf("Word replaced successfully.\n");
    return 0;
}

*/