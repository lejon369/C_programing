#include <stdio.h>

// Function to check even or odd
void checkEvenOdd(int num) {
    if (num % 2 == 0) {
        printf("%d is Even\n", num);
    } else {
        printf("%d is Odd\n", num);
    }
}

int main() {
    int number;

    // Get input from user
    printf("Enter a number: ");
    scanf("%d", &number);

    // Call the function
    checkEvenOdd(number);

    return 0;
}
