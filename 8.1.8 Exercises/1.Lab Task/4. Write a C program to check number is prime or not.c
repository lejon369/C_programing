#include <stdio.h>
#include <stdbool.h>

struct Number {
    int value;
    bool isPrime;
};

int main() {
    struct Number num;
    num.isPrime = true;

    printf("Enter a number: ");
    scanf("%d", &num.value);

    if (num.value <= 1) {
        num.isPrime = false;
    } else {
        for (int i = 2; i <= num.value / 2; i++) {
            if (num.value % i == 0) {
                num.isPrime = false;
                break;
            }
        }
    }

    if (num.isPrime)
        printf("%d is a prime number.\n", num.value);
    else
        printf("%d is not a prime number.\n", num.value);

    return 0;
}
/*
#include <stdio.h>

struct Number {
    int value;
    int isPrime;  // 1 means prime, 0 means not prime
};

int main() {
    struct Number num;
    int i;

    printf("Enter a number: ");
    scanf("%d", &num.value);

    if (num.value <= 1) {
        num.isPrime = 0;
    } else {
        num.isPrime = 1;  // assume prime
        for (i = 2; i <= num.value / 2; i++) {
            if (num.value % i == 0) {
                num.isPrime = 0;
                break;
            }
        }
    }

    if (num.isPrime)
        printf("%d is prime.\n", num.value);
    else
        printf("%d is not prime.\n", num.value);

    return 0;
}

*/