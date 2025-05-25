#include <stdio.h>

int main() {
    int a, b;
    int *p1, *p2;

    // Input two numbers
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    // Assign addresses to pointers
    p1 = &a;
    p2 = &b;

    // Compare using pointers
    if (*p1 > *p2)
        printf("Maximum is: %d\n", *p1);
    else
        printf("Maximum is: %d\n", *p2);

    return 0;
}
