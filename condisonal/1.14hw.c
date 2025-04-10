#include<stdio.h>

int main() {
    int x;

    printf("Enter a value:");
    scanf("%d", &x); 
    if (x%5==0 || (x%3== 0 && x%15!= 0))
    {
        printf("devisible by 3 &5 ");
    }else{
        printf("NOT devisible by 15");

    }
    
    return 0;
}