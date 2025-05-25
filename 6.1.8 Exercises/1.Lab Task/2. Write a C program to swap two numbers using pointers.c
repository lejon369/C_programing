#include <stdio.h>

// Function to swap two numbers using pointers
void swap(int *x, int *y) {
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

int main() {
    int a, b;

    // Input two numbers
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    // Show before swapping
    printf("Before swap: a = %d, b = %d\n", a, b);

    // Call swap function
    swap(&a, &b);

    // Show after swapping
    printf("After swap:  a = %d, b = %d\n", a, b);

    return 0;
}
