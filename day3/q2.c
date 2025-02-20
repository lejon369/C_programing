#include<stdio.h>
int main (){
	int num;

	printf("Enter a value: ", num);
	scanf("%d", &num);

	if( num % 5 == 0){
    	printf("This number is divisible by 5 ");
	}else if(num % 11 == 0){
    	printf("This number is divisible by 11");
	} else{
    	printf("Not Divided");
	};


return 0;
}
