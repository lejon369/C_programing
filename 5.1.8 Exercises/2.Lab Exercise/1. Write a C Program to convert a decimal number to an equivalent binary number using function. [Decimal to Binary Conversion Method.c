#include <stdio.h>

// Function to convert decimal to binary
void decimalToBinary(int num) {
    if (num == 0) {
        printf("0");
        return;
    }

    int binary[32];  // To store binary digits
    int i = 0;

    // Store binary digits in array
    while (num > 0) {
        binary[i] = num % 2;
        num = num / 2;
        i++;
    }

    // Print binary in reverse order
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", binary[j]);
    }
}

int main() {
    int decimal;

    // Input from user
    printf("Enter a decimal number: ");
    scanf("%d", &decimal);

    printf("Binary equivalent: ");
    decimalToBinary(decimal);

    return 0;
}


/*
#include <stdio.h>

// Function to convert and print binary
void convertToBinary(int n) {
    if (n > 1)
        convertToBinary(n / 2);  // Recursive call

    printf("%d", n % 2);  // Print remainder (0 or 1)
}

int main() {
    int num;

    // Input from user
    printf("Enter a decimal number: ");
    scanf("%d", &num);

    printf("Binary is: ");
    convertToBinary(num);

    return 0;
}

*/