#include<stdio.h>

int main(){

    int x;
    printf("put the number: ");
    scanf("%d",&x);

    if (x%5==0)
    {
        printf("this is a devide by 5");
    }else{
        printf("this is not devide by 5");
    }
    
    return 0;
}