#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    char replaceChar;

    // Input the string from the user
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Remove newline character if present
    size_t len = strlen(str);
    if(len > 0 && str[len - 1] == '\n') {
        str[len - 1] = '\0';
    }

    // Input the character to replace spaces
    printf("Enter the character to replace spaces: ");
    scanf("%c", &replaceChar);

    // Replace spaces with the specified character
    for(int i = 0; str[i] != '\0'; i++) {
        if(str[i] == ' ') {
            str[i] = replaceChar;
        }
    }

    // Output the modified string
    printf("Modified string: %s\n", str);

    return 0;
}


/*
#include <stdio.h>

int main() {
    char str[100];
    char ch;
    int i = 0;

    // Get the string from the user
    printf("Enter a string: ");
    gets(str);  // Note: gets is unsafe, but simple for basic programs

    // Get the character to replace spaces
    printf("Enter a character to replace spaces: ");
    scanf("%c", &ch);

    // Replace spaces with the given character
    while (str[i] != '\0') {
        if (str[i] == ' ') {
            str[i] = ch;
        }
        i++;
    }

    // Print the result
    printf("Modified string: %s\n", str);

    return 0;
}

*/