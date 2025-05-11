//2. Write a C Program to Calculate Area and Circumference of Circle.

#include<stdio.h>
#define PI 3.1416

int main(){
    float radius,area;
 /*
 Area and Circumference of Circle.
    A= PI*r^2
 */
    printf("Enter Radius: ");
    scanf("%f",&radius);

    area = PI * radius * radius ;

    printf("The Area and Circumference of Circle: %f ",area);

return 0;
}