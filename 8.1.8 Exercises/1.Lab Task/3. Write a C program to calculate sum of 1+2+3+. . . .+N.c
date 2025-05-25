#include <stdio.h>

struct Numbers {
    int N;
    int sum;
};

int main() {
    struct Numbers num;

    printf("Enter value of N: ");
    scanf("%d", &num.N);

    num.sum = 0;
    for (int i = 1; i <= num.N; i++) {
        num.sum += i;
    }

    printf("Sum of 1 to %d = %d\n", num.N, num.sum);

    return 0;
}
