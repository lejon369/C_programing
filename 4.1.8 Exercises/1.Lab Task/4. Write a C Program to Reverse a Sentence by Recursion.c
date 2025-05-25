#include <stdio.h>

// Recursive function to reverse and print characters
void reverseSentence() {
    char ch;
    scanf("%c", &ch);  // Read one character

    if (ch != '\n') {
        reverseSentence();       // Recursive call
        printf("%c", ch);        // Print after recursion (reverse order)
    }
}

int main() {
    printf("Enter a sentence: ");
    reverseSentence();  // Call the recursive function
    return 0;
}



/*


*/