#include<stdio.h>

int main() {
    int a,b,c;

    printf("Enter the no:");
    scanf("%d", &a); 

    printf("Enter the no: ");
    scanf("%d", &b); 

    printf("Enter the: ");
    scanf("%d", &c); 


     if (a<b && a<c) {

        printf("A is smalll\n");

    } else if(b<c && b<a){

        printf("B is small\n");
    }else
    {
        printf("C is small\n");        
    }
    

    return 0;
}