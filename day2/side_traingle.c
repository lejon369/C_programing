#include<stdio.h>

int main(){
    int a,b,c;

    printf("this is a side of triangle : ",a);
    scanf("%d", &a);

    printf("this is a side of triangle : ",b);
    scanf("%d", &b);

    printf("this is a side of triangle : ",c);
    scanf("%d", &c);

    if( (a+b) > c && (b+c) > a && (c+a) > b){
        printf("this is valid traingle ",a);
    }else{
        printf("invalid tringle ");
    }

return 0;
}
