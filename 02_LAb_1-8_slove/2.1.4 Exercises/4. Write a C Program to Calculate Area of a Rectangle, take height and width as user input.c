#include<stdio.h>

int main(){
    float height,weight,rectangle;

    printf("Enter height: ");
    scanf("%f",&height);

    printf("Enter weight: ");
    scanf("%f",&weight);

    rectangle= height * weight;
    

    printf("Area of a Rectangle: %.2f M\n",rectangle);

return 0;
}
