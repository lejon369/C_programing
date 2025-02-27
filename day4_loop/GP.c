#include<stdio.h>

int main(){


    char a = 'a';
    int n;
    printf("Enter a value: ");
    scanf("%d", &n);

    int a = 1;

    for(int i = 1; i <= n; i++){
        printf("%d ",a);
        a = a*2;
    };


return 0;
}
