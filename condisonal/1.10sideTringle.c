#include <stdio.h>

int main() {
    int a,b,c;

    printf("Enter the no:");
    scanf("%d", &a); 

    printf("Enter the no: ");
    scanf("%d", &b); 

    printf("Enter the: ");
    scanf("%d", &c); 


     if (a+b>c && b+c>a && c+a> b) {
        printf("This is a tringle\n");
    } else {
        printf("not a tringle\n");
    }

    return 0;
}