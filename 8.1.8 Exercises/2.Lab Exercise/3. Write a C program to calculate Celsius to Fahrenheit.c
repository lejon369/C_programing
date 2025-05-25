#include <stdio.h>

struct Temperature {
    float celsius;
    float fahrenheit;
};

int main() {
    struct Temperature temp;

    printf("Enter temperature in Celsius: ");
    scanf("%f", &temp.celsius);

    temp.fahrenheit = (temp.celsius * 9 / 5) + 32;

    printf("Temperature in Fahrenheit = %.2f\n", temp.fahrenheit);

    return 0;
}
/*
#include <stdio.h>

struct Temp {
    float c;
    float f;
};

int main() {
    struct Temp t;
    printf("Enter Celsius: ");
    scanf("%f", &t.c);

    t.f = (t.c * 9/5) + 32;

    printf("Fahrenheit = %.2f\n", t.f);
    return 0;
}

*/