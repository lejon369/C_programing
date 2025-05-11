#include<stdio.h>

int main(){
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if(num > 0){
        printf("This is positive number: %d\n", num);
    }else{
        printf("This is negative number: %d\n", num);
    }

return 0;
}