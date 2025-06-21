#include<stdio.h>
int main (){
int num,last_dig;
printf("Enter an integer: ");
scanf("%d", &num);

last_dig = num%10;
printf("Last digit of %d is %d\n", num, last_dig);

return 0;
}