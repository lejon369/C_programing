#include<stdio.h>

int main(){
    int i;

    printf("Enter Number: ");
    scanf("%d", &i);

    if(i%2 == 0){
        printf("The number is EVEN\n");
    }else{
        printf("The number is ODD\n");
    }

return 0;
}