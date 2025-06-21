#include<stdio.h>
int main(){

    int num, count = 1;

    printf("Enter an integer: ");
    scanf("%d", &num);

    for (int i = 1; i <= num; i++)
    {
        num /= 10; 
        count++; 
    }
    printf("Number of digits: %d\n", count);


return 0;
}

/*
#include <stdio.h>

int main()
{
    long long num;
    int count = 0;
    
    printf("Enter any number: ");
    scanf("%lld", &num);
   
    do
    {        
        count++;
        num /= 10;
    } 
    while(num != 0);
    printf("Total digits: %d", count);
    return 0;
}

*/