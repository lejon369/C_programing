#include<stdio.h>
int main (){

	int num;

	printf("Enter a value: ", num);
	scanf("%d", &num);

	if( num % 4 == 0){
    	printf("This is a Leap year: %d ");

	} else{
    	printf("not Leap year: %d ");
	};
return 0;
}
