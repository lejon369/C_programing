#include <stdio.h>

// Function to check if a number is perfect
int isPerfect(int num) {
    int sum = 0;
    for (int i = 1; i < num; i++) {
        if (num % i == 0) {
            sum += i;
        }
    }
    return (sum == num);
}

// Function to print perfect numbers in a range
void printPerfectNumbers(int start, int end) {
    printf("Perfect numbers between %d and %d are:\n", start, end);
    for (int i = start; i <= end; i++) {
        if (isPerfect(i)) {
            printf("%d\n", i);
        }
    }
}

int main() {
    int start, end;

    // Get the interval from user
    printf("Enter the start of interval: ");
    scanf("%d", &start);
    printf("Enter the end of interval: ");
    scanf("%d", &end);

    // Call function to print perfect numbers
    printPerfectNumbers(start, end);

    return 0;
}
/*

#include <stdio.h>

// Function to check perfect number
int isPerfect(int num) {
    int sum = 0;
    for (int i = 1; i < num; i++) {
        if (num % i == 0) {
            sum += i;
        }
    }
    if (sum == num)
        return 1;
    else
        return 0;
}

int main() {
    int start, end;

    // Input range
    printf("Enter start number: ");
    scanf("%d", &start);
    printf("Enter end number: ");
    scanf("%d", &end);

    // Print perfect numbers in range
    printf("Perfect numbers between %d and %d are:\n", start, end);
    for (int i = start; i <= end; i++) {
        if (isPerfect(i)) {
            printf("%d\n", i);
        }
    }

    return 0;
}

*/