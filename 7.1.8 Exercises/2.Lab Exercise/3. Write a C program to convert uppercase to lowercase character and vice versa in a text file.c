#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *file;
    FILE *tempFile;
    char ch;

    file = fopen("input.txt", "r");
    if (file == NULL) {
        printf("Cannot open input.txt\n");
        return 1;
    }

    tempFile = fopen("temp.txt", "w");
    if (tempFile == NULL) {
        printf("Cannot create temp.txt\n");
        fclose(file);
        return 1;
    }

    // Read each character and switch case
    while ((ch = fgetc(file)) != EOF) {
        if (islower(ch))
            ch = toupper(ch);
        else if (isupper(ch))
            ch = tolower(ch);
        fputc(ch, tempFile);
    }

    fclose(file);
    fclose(tempFile);

    // Replace original file with modified file
    remove("input.txt");
    rename("temp.txt", "input.txt");

    printf("Case conversion done.\n");
    return 0;
}
/*
#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *file, *temp;
    char ch;

    file = fopen("input.txt", "r");
    if (!file) {
        printf("Can't open input.txt\n");
        return 1;
    }

    temp = fopen("temp.txt", "w");
    if (!temp) {
        printf("Can't create temp.txt\n");
        fclose(file);
        return 1;
    }

    while ((ch = fgetc(file)) != EOF) {
        if (ch >= 'a' && ch <= 'z')
            ch = ch - 32;  // to uppercase
        else if (ch >= 'A' && ch <= 'Z')
            ch = ch + 32;  // to lowercase
        fputc(ch, temp);
    }

    fclose(file);
    fclose(temp);

    remove("input.txt");
    rename("temp.txt", "input.txt");

    printf("Conversion done.\n");
    return 0;
}

*/