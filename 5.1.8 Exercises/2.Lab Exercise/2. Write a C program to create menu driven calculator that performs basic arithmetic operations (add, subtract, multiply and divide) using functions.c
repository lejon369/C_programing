#include <stdio.h>

// Function declarations
float add(float a, float b) {
    return a + b;
}

float subtract(float a, float b) {
    return a - b;
}

float multiply(float a, float b) {
    return a * b;
}

float divide(float a, float b) {
    if (b != 0)
        return a / b;
    else {
        printf("Error: Division by zero!\n");
        return 0;
    }
}

int main() {
    int choice;
    float num1, num2, result;

    // Display menu
    printf("Simple Calculator\n");
    printf("1. Add\n");
    printf("2. Subtract\n");
    printf("3. Multiply\n");
    printf("4. Divide\n");
    printf("Enter your choice (1-4): ");
    scanf("%d", &choice);

    // Input numbers
    printf("Enter two numbers: ");
    scanf("%f %f", &num1, &num2);

    // Perform selected operation
    switch (choice) {
        case 1:
            result = add(num1, num2);
            printf("Result: %.2f\n", result);
            break;
        case 2:
            result = subtract(num1, num2);
            printf("Result: %.2f\n", result);
            break;
        case 3:
            result = multiply(num1, num2);
            printf("Result: %.2f\n", result);
            break;
        case 4:
            result = divide(num1, num2);
            printf("Result: %.2f\n", result);
            break;
        default:
            printf("Invalid choice!\n");
    }

    return 0;
}

/*
#include <stdio.h>

// Functions for operations
int add(int a, int b) { return a + b; }
int sub(int a, int b) { return a - b; }
int mul(int a, int b) { return a * b; }
int divide(int a, int b) {
    if (b == 0) {
        printf("Cannot divide by zero!\n");
        return 0;
    }
    return a / b;
}

int main() {
    int a, b, choice;

    // Menu
    printf("1. Add\n2. Subtract\n3. Multiply\n4. Divide\n");
    printf("Enter your choice (1-4): ");
    scanf("%d", &choice);

    // Input numbers
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    // Perform operation
    if (choice == 1)
        printf("Result = %d\n", add(a, b));
    else if (choice == 2)
        printf("Result = %d\n", sub(a, b));
    else if (choice == 3)
        printf("Result = %d\n", mul(a, b));
    else if (choice == 4)
        printf("Result = %d\n", divide(a, b));
    else
        printf("Invalid choice\n");

    return 0;
}

*/