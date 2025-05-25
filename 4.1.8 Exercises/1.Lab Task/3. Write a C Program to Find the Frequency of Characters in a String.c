#include <stdio.h>

int main() {
    char str[100];
    int freq[256] = {0};  // ASCII character frequency array
    int i;

    // Input string
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Count frequency of each character
    for (i = 0; str[i] != '\0'; i++) {
        freq[(unsigned char)str[i]]++;
    }

    // Display frequency of each character
    printf("\nCharacter Frequencies:\n");
    for (i = 0; i < 256; i++) {
        if (freq[i] > 0 && i != '\n') {
            printf("'%c' = %d\n", i, freq[i]);
        }
    }

    return 0;
}


/*
#include <stdio.h>

int main() {
    char str[100];
    int i;
    int freq[26] = {0}; // To store frequency of a-z

    // Input string
    printf("Enter a lowercase string: ");
    scanf("%s", str); // Simple input, no spaces

    // Count frequency of each letter
    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            freq[str[i] - 'a']++;  // Convert character to index
        }
    }

    // Print frequencies
    printf("\nCharacter Frequencies:\n");
    for (i = 0; i < 26; i++) {
        if (freq[i] > 0) {
            printf("%c = %d\n", i + 'a', freq[i]);
        }
    }

    return 0;
}


*/