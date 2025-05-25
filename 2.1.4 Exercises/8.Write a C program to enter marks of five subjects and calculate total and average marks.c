#include<stdio.h>

int main(){
    float sub1,sub2,sub3,sub4,sub5,total,avarage;

    printf("Enter sub1 no: ");
    scanf("%f",&sub1);

    printf("Enter sub2 no: ");
    scanf("%f",&sub2);

    printf("Enter sub3 no: ");
    scanf("%f",&sub3);

    printf("Enter sub4 no: ");
    scanf("%f",&sub4);

    printf("Enter sub5 no: ");
    scanf("%f",&sub5);

    total = sub1 + sub2 + sub3 + sub4 + sub5;
    avarage = total / 5;


    printf("Five subject total number: %.2f cm\n",total);
    printf("Five subject Avarage number: %.2f cm\n",avarage);

return 0;
}
