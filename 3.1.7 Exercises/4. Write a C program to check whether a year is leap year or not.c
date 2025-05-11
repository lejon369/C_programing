#include<stdio.h>

int main(){
    int i;

    printf("Enter Number: ");
    scanf("%d", &i);

    if(i%4 == 0 || i% 400 == 0){
        printf("This Year is leap year: %d\n",i);
    }else{
        printf("This Year is not a leap year: %d\n",i);
    }

return 0;
}