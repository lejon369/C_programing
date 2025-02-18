#include<stdio.h>

int main(){
    int a,b,c;

    printf("This is a 1st value: ", a);
    scanf("%d", &a);

    printf("this is a 2nd value: ", b);
    scanf("%d", &b);

    printf("this is a 3rd value: ", c);
    scanf("%d", &c);

    if (a<b && a<c){
        printf("this smaller than %d", a);
    }
     if (b<a && b<c){
        printf("this smaller than %d", b);
    }
     if (c<b && c<a){
        printf("this smaller than %d", c);
    }
}
