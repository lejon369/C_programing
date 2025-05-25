#include <stdio.h>

int main() {
    int arr[100], n, i;
    int *ptr;
    int max, min;

    // Input size of array
    printf("Enter number of elements: ");
    scanf("%d", &n);

    // Input array elements
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    ptr = arr;  // Pointer to first element

    max = min = *ptr;  // Initialize max and min with first element

    // Traverse array using pointer
    for (i = 1; i < n; i++) {
        if (*(ptr + i) > max)
            max = *(ptr + i);
        if (*(ptr + i) < min)
            min = *(ptr + i);
    }

    printf("Maximum element = %d\n", max);
    printf("Minimum element = %d\n", min);

    return 0;
}
