#include <stdio.h>

// Function to find factorial of a digit
int factorial(int n) {
    int fact = 1;
    for (int i = 1; i <= n; i++)
        fact *= i;
    return fact;
}

// Function to check if a number is Strong
int isStrong(int num) {
    int temp = num, sum = 0, digit;
    while (temp > 0) {
        digit = temp % 10;
        sum += factorial(digit);
        temp /= 10;
    }
    return sum == num;
}

int main() {
    int start, end;

    // Input interval from user
    printf("Enter start number: ");
    scanf("%d", &start);
    printf("Enter end number: ");
    scanf("%d", &end);

    printf("Strong numbers between %d and %d are:\n", start, end);

    // Check and print Strong numbers
    for (int i = start; i <= end; i++) {
        if (isStrong(i)) {
            printf("%d\n", i);
        }
    }

    return 0;
}
/*
#include <stdio.h>

// Function to find factorial of a digit
int fact(int n) {
    int f = 1;
    for (int i = 1; i <= n; i++)
        f *= i;
    return f;
}

// Function to check if a number is strong
int isStrong(int num) {
    int sum = 0, temp = num, d;
    while (temp > 0) {
        d = temp % 10;
        sum += fact(d);
        temp = temp / 10;
    }
    if (sum == num)
        return 1;
    else
        return 0;
}

int main() {
    int start, end;
    printf("Enter start: ");
    scanf("%d", &start);
    printf("Enter end: ");
    scanf("%d", &end);

    printf("Strong numbers between %d and %d are:\n", start, end);
    for (int i = start; i <= end; i++) {
        if (isStrong(i))
            printf("%d\n", i);
    }

    return 0;
}

*/