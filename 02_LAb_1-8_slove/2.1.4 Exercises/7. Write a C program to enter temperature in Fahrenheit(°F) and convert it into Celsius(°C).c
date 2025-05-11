#include<stdio.h>

int main(){

    float fahrenheit,celsius;

    // °(32°F − 32) × 5/9 = 0°C
    printf("Enter celsius temperature: ");
    scanf("%f",&fahrenheit);

    celsius= (fahrenheit -32) * 5/9;    

    printf("Fahrenheit temperature convert it into celsius: %.2f M\n",celsius);

return 0;
}
