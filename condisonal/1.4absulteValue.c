#include<stdio.h>

int main(){

    int x;
    printf("put the number: ");
    scanf("%d",&x);

    if (x<0)x = x* (-1);

        printf("modulas value are: %d",x);
    
    return 0;
}