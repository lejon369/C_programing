#include<stdio.h>

int main(){
    int a,b,c;

    printf("Ente a 1st value : ", a);
    scanf("%d", &a);

    printf("Ente a 2nd value : ", b);
    scanf("%d", &b);

    printf("Ente a 3rd value : ", c);
    scanf("%d", &c);




    if( a > b && a > c ){
        printf("%d is gratest ", a);
    }
    if( b>a && b > c ){
        printf("%d is gratest ", b);
    }if( c > a && c > b ){
         printf("%d is gratest ", c);
    };

    return 0;
}
