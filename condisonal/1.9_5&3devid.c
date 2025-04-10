#include <stdio.h>

int main() {
    int x;

    printf("Enter the number: ");
    scanf("%d", &x); 

     if (x%5==0 || x%3 == 0) {
        printf("Three dig number.div 5 & 3\n");
    } else {
        printf("not a divdied 5 & 3 \n");
    }

    return 0;
}