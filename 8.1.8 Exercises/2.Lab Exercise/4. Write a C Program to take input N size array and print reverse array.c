#include <stdio.h>

struct Array {
    int size;
    int elements[100];
};

int main() {
    struct Array arr;

    printf("Enter number of elements: ");
    scanf("%d", &arr.size);

    printf("Enter %d numbers:\n", arr.size);
    for (int i = 0; i < arr.size; i++) {
        scanf("%d", &arr.elements[i]);
    }

    printf("Array in reverse order:\n");
    for (int i = arr.size - 1; i >= 0; i--) {
        printf("%d ", arr.elements[i]);
    }
    printf("\n");

    return 0;
}
/*
#include <stdio.h>

struct Numbers {
    int arr[100];
    int size;
};

int main() {
    struct Numbers n;

    printf("Enter size: ");
    scanf("%d", &n.size);

    for (int i = 0; i < n.size; i++)
        scanf("%d", &n.arr[i]);

    printf("Reverse: ");
    for (int i = n.size - 1; i >= 0; i--)
        printf("%d ", n.arr[i]);

    return 0;
}

*/