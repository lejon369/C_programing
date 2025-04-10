#include<stdio.h>

int main(){

    int x;
    printf("put the number: ");
    scanf("%d",&x);

    if (x%2==0)
    {
        printf("this is a even number");
    }else{
        printf("this is a odd number");
    }
    
    return 0;
}