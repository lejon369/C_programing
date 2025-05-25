#include <stdio.h>

struct Number {
    int n;
};

int main() {
    struct Number num;

    printf("Enter a number n: ");
    scanf("%d", &num.n);

    printf("Numbers from 1 to %d:\n", num.n);
    for (int i = 1; i <= num.n; i++) {
        printf("%d ", i);
    }
    printf("\n");

    return 0;
}
