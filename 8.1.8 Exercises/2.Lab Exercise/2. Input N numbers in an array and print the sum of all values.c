#include <stdio.h>

struct Array {
    int size;
    int elements[100];
    int sum;
};

int main() {
    struct Array arr;
    arr.sum = 0;

    printf("Enter number of elements: ");
    scanf("%d", &arr.size);

    printf("Enter %d numbers:\n", arr.size);
    for (int i = 0; i < arr.size; i++) {
        scanf("%d", &arr.elements[i]);
        arr.sum += arr.elements[i];
    }

    printf("Sum of all elements = %d\n", arr.sum);

    return 0;
}
/*
#include <stdio.h>

struct Array {
    int data[100];
    int size;
};

int main() {
    struct Array a;
    int sum = 0;

    printf("Enter how many numbers: ");
    scanf("%d", &a.size);

    for (int i = 0; i < a.size; i++) {
        scanf("%d", &a.data[i]);
        sum += a.data[i];
    }

    printf("Sum = %d\n", sum);
    return 0;
}

*/