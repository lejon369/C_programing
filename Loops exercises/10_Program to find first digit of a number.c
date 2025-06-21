#include<stdio.h>
int main (){
int num,first;
printf("Enter an integer: ");
scanf("%d", &num);

first = num;
while(first>=10){
    first /= 10;
}

printf("first digit of %d is %d\n", num, first);

return 0;
}