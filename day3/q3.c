#include<stdio.h>
int main (){

	int num;

	printf("Enter a value: ", num);
	scanf("%d", &num);

	if( num % 2 == 0){
    	printf("This is a even number: %d ");
	} else{
    	printf("odd number: %d ");
	};

return 0;
}
