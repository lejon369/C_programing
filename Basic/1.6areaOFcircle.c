#include<stdio.h>
#define PI 3.1416

int main(){

    float area,circles;
    printf("Enter a value : ");
    scanf("%f", &area);

    circles = area*PI*area;
    printf("Your area is : %f",circles);

    return 0;
}
