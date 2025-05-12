#include<stdio.h>

int main(){
    int angle1,angle2,angle3,sum;

    printf("Enter Angle 1: ");
    scanf("%d", &angle1);

    printf("Enter Angle 2: ");
    scanf("%d", &angle2);

    printf("Enter Angle 3: ");
    scanf("%d", &angle3);


    // sum = angle1 + angle2 + angle3;

    if( (angle1 + angle2) > angle3 && (angle2 + angle3) > angle1 && (angle1 + angle3) > angle2){
        printf("All side Triangle Are valid: %d\n");
    }else{
        printf("This is not All side Triangle\n");
    }

return 0;
}