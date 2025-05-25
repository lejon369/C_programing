#include<stdio.h>

int main(){
    int angle1,angle2,angle3,sum;

    printf("Enter Angle 1: ");
    scanf("%d", &angle1);

    printf("Enter Angle 2: ");
    scanf("%d", &angle2);

    printf("Enter Angle 3: ");
    scanf("%d", &angle3);


    sum = angle1 + angle2 + angle3;

    if(sum == 180 && angle1 > 0 && angle2 > 0 && angle3 > 0 ){
        printf("Triangle Are valid: %d\n",sum);
    }else{
        printf("This is not a Triangle required 180\n");
    }

return 0;
}