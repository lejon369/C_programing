#include<stdio.h>
int main (){
	int day;

	printf("Enter a weeak(1-7): ", day);
	scanf("%d", &day);

	if( day == 1){
    	printf("today is Sunday: %d");

	}else if( day == 2){
    	printf("today is monday: %d");

	}else if( day == 3){
    	printf("today is tuesday: %d");

	}else if( day == 4){
    	printf("today is wednasday: %d");

	}else if( day == 5){
    	printf("today is thusday: %d");

	}else if( day == 6){
    	printf("today is friday: %d");

	}else if( day == 7){
    	printf("today is saturday: %d");

	}else{
    	printf("oops .. only value 1 to 7");
	};

return 0;
}
