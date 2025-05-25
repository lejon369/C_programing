#include <stdio.h>

struct Numbers {
    int num1;
    int num2;
    int num3;
};

int main() {
    struct Numbers n;

    printf("Enter three numbers:\n");
    scanf("%d %d %d", &n.num1, &n.num2, &n.num3);

    int greatest = n.num1;

    if (n.num2 > greatest)
        greatest = n.num2;
    if (n.num3 > greatest)
        greatest = n.num3;

    printf("Greatest number is: %d\n", greatest);

    return 0;
}
