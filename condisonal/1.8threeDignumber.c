#include <stdio.h>

int main() {
    int x;

    printf("Enter the ");
    scanf("%d", &x); 

     if (x > 99 && x< 999) {
        printf("Three dig number.\n");
    } else {
        printf("not a number\n");
    }

    return 0;
}