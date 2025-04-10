#include<stdio.h>
#define PI 3.14159

int main(){

    float readus,area,red3,volume;

    area = 1.333333;

    printf("Enter a  value: ");
    scanf("%f",&readus);
    red3 = readus*readus*readus;

    volume= area*PI*red3;

    printf("your  value is : %f",volume);
    return 0;
}
