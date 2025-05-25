#include <stdio.h>

int main() {
    char str[100];
    int i, alphabets = 0, digits = 0, special = 0;

    // Input the string
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin); // Reads full line including spaces

    // Loop through the string
    for (i = 0; str[i] != '\0'; i++) {
        // Check if character is alphabet
        if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z')) {
            alphabets++;
        }
        // Check if character is digit
        else if (str[i] >= '0' && str[i] <= '9') {
            digits++;
        }
        // Check if it's not newline, then it's special character
        else if (str[i] != '\n') {
            special++;
        }
    }

    // Output the counts
    printf("Alphabets: %d\n", alphabets);
    printf("Digits: %d\n", digits);
    printf("Special characters: %d\n", special);

    return 0;
}
