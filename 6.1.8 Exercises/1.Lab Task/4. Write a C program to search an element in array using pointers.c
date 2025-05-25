#include <stdio.h>

int main() {
    int arr[100], n, i, key;
    int *ptr;

    // Input size of array
    printf("Enter number of elements: ");
    scanf("%d", &n);

    // Input array elements
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    // Input element to search
    printf("Enter element to search: ");
    scanf("%d", &key);

    // Set pointer to array
    ptr = arr;

    // Search using pointer
    for (i = 0; i < n; i++) {
        if (*(ptr + i) == key) {
            printf("Element %d found at position %d.\n", key, i + 1);
            return 0;
        }
    }

    printf("Element %d not found in the array.\n", key);

    return 0;
}
