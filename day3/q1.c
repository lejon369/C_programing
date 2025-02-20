#include <stdio.h>

int main() {
    int angle1, angle2, angle3;

    printf("Enter  angles 1 : ");
    scanf("%d", &angle1);

    printf("Enter  angles 2: ");
    scanf("%d", &angle2);

    printf("Enter  angles 3: ");
    scanf("%d ",&angle3);

    if(angle1 > 0 && angle2 > 0 && angle3 > 0) {

        if(angle1 + angle2 + angle3 == 180)
            printf("Valid triangle");
         else
            printf("Sum of angles ≠ 180)");
    }
    else {
        printf("Angles must be positive)");
    }

    return 0;
}
