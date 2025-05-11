#include<stdio.h>

int main(){
    float meter,kilometer,convert1,convert2;

    printf("Enter meter: ");
    scanf("%f",&meter);

    printf("Enter kilometer: ");
    scanf("%f",&kilometer);

    convert1 = meter * 100;
    convert2 = kilometer * 1000;

    printf("length in centimeter and convert it into meter: %.2f cm\n",convert1);
    printf("length in centimeter and convert it into kilometer: %.2f cm\n",convert2);

return 0;
}
