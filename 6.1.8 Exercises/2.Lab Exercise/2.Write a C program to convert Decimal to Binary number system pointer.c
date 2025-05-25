#include <stdio.h>

// Function to convert decimal to binary and store in array using pointer
void decimalToBinary(int num, int *binary, int *size) {
    int i = 0;
    while (num > 0) {
        *(binary + i) = num % 2;
        num = num / 2;
        i++;
    }
    *size = i; // number of binary digits stored
}

int main() {
    int decimal;
    int binary[32]; // array to hold binary digits
    int size = 0;

    printf("Enter a decimal number: ");
    scanf("%d", &decimal);

    decimalToBinary(decimal, binary, &size);

    printf("Binary equivalent: ");
    // binary digits are stored in reverse order, so print from last to first
    for (int i = size - 1; i >= 0; i--) {
        printf("%d", *(binary + i));
    }
    printf("\n");

    return 0;
}
/*
#include <stdio.h>

int main() {
    int num;
    int binary[32];
    int *ptr = binary;
    int i = 0;

    printf("Enter a decimal number: ");
    scanf("%d", &num);

    if (num == 0) {
        printf("Binary: 0\n");
        return 0;
    }

    // Convert decimal to binary
    while (num > 0) {
        *(ptr + i) = num % 2;
        num = num / 2;
        i++;
    }

    printf("Binary: ");
    // Print binary in reverse order
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", *(ptr + j));
    }
    printf("\n");

    return 0;
}

*/