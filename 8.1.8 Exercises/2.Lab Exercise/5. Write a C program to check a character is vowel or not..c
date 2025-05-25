#include <stdio.h>

struct Character {
    char ch;
};

int main() {
    struct Character c;

    printf("Enter a character: ");
    scanf(" %c", &c.ch);

    char ch = c.ch;
    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
        ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
        printf("%c is a vowel.\n", c.ch);
    } else {
        printf("%c is not a vowel.\n", c.ch);
    }

    return 0;
}
/*
#include <stdio.h>

struct Char {
    char c;
};

int main() {
    struct Char ch;

    printf("Enter a character: ");
    scanf(" %c", &ch.c);

    if (ch.c == 'a' || ch.c == 'e' || ch.c == 'i' || ch.c == 'o' || ch.c == 'u' ||
        ch.c == 'A' || ch.c == 'E' || ch.c == 'I' || ch.c == 'O' || ch.c == 'U')
        printf("Vowel\n");
    else
        printf("Not a vowel\n");

    return 0;
}

*/