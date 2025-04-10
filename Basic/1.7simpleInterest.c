#include<stdio.h>

int main(){


float principal,rate,time,total;


    printf("Enter a principal: ");
    scanf("%f",&principal);

    printf("Enter a rate: ");
    scanf("%f",&rate);

    printf("Enter a time: ");
    scanf("%f",&time);

    total = (principal*rate*time)/100;
    printf("your total value is: %f",total);

    return 0;
}
