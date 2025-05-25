#include <stdio.h>

int main() {
    float a, b, c;

    printf("Enter three sides of a triangle:\n");
    scanf("%f %f %f", &a, &b, &c);
 
    if (a > 0 && b > 0 && c > 0 &&
        (a + b > c) && (a + c > b) && (b + c > a)) {

        if (a == b && b == c) {
            printf("The triangle is equilateral.\n");
        } else if (a == b || b == c || a == c) {
            printf("The triangle is isosceles.\n");
        } else {
            printf("The triangle is scalene.\n");
        }

    } else {
        printf("The triangle is NOT valid.\n");
    }

    return 0;
}
