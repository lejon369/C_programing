#include <stdio.h>

// Recursive function to find power
int power(int base, int exp) {
    if (exp == 0)
        return 1; // base case
    else
        return base * power(base, exp - 1); // recursive case
}

int main() {
    int base, exp;

    // Input from user
    printf("Enter base: ");
    scanf("%d", &base);

    printf("Enter exponent: ");
    scanf("%d", &exp);

    // Call recursive function and display result
    printf("%d^%d = %d\n", base, exp, power(base, exp));

    return 0;
}
