#include <stdio.h>

// Recursive function to find nth Fibonacci term
int fibonacci(int n) {
    if (n == 0)
        return 0;
    else if (n == 1)
        return 1;
    else
        return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int n;

    // Input from user
    printf("Enter the value of n: ");
    scanf("%d", &n);

    // Output nth Fibonacci term
    printf("Fibonacci term at position %d is %d\n", n, fibonacci(n));

    return 0;
}

/*
#include <stdio.h>

// Recursive function to find Fibonacci term
int fib(int n) {
    if (n == 0) return 0;
    if (n == 1) return 1;
    return fib(n - 1) + fib(n - 2);
}

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    printf("Fibonacci term at position %d is %d\n", n, fib(n));

    return 0;
}

*/