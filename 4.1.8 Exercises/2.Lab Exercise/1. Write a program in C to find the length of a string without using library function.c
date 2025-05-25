#include <stdio.h>

int main() {
    char str[100];  // Array to store the string
    int i = 0;      // Counter variable

    // Ask user to enter the string
    printf("Enter a string: ");
    scanf("%s", str);  // This will read a word (no spaces)

    // Count characters until we reach the null character '\0'
    while (str[i] != '\0') {
        i++;
    }

    // Print the length
    printf("Length of the string is: %d\n", i);

    return 0;
}
