#include <stdio.h>

int main() {
    char str1[100], str2[100];
    char *ptr1 = str1;
    char *ptr2 = str2;

    // Input two strings
    printf("Enter first string: ");
    gets(str1);
    printf("Enter second string: ");
    gets(str2);

    // Move ptr1 to the end of first string
    while (*ptr1 != '\0') {
        ptr1++;
    }

    // Copy second string to the end of first string
    while (*ptr2 != '\0') {
        *ptr1 = *ptr2;
        ptr1++;
        ptr2++;
    }

    *ptr1 = '\0';  // Null-terminate the concatenated string

    printf("Concatenated string: %s\n", str1);

    return 0;
}
