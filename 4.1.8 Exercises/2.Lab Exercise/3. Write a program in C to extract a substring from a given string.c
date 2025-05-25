#include <stdio.h>

int main() {
    char str[100], substr[100];
    int start, length, i;

    // Input the main string
    printf("Enter the main string: ");
    fgets(str, sizeof(str), stdin);

    // Input the starting position and length of substring
    printf("Enter the starting position (0-based index): ");
    scanf("%d", &start);

    printf("Enter the length of the substring: ");
    scanf("%d", &length);

    // Extract the substring
    for (i = 0; i < length; i++) {
        substr[i] = str[start + i];
    }
    substr[i] = '\0'; // Null-terminate the substring

    // Print the result
    printf("Extracted substring: %s\n", substr);

    return 0;
}
