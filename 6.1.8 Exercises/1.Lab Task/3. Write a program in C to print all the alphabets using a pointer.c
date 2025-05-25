#include <stdio.h>

int main() {
    char ch = 'A';
    char *ptr = &ch;

    printf("Alphabets from A to Z:\n");

    while (*ptr <= 'Z') {
        printf("%c ", *ptr);
        (*ptr)++;  // Move to next alphabet
    }

    return 0;
}
