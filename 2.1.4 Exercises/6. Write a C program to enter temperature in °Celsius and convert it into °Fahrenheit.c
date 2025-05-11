#include<stdio.h>

int main(){

    float fahrenheit,celsius;

    // °F = °C × (9/5) + 32. formula
    printf("Enter celsius temperature: ");
    scanf("%f",&celsius);

    fahrenheit= (celsius * 9/5) + 32;    

    printf("°Celsius temperature convert it into °Fahrenheit: %.2f M\n",fahrenheit);

return 0;
}
