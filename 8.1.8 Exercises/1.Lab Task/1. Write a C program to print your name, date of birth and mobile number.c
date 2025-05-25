#include <stdio.h>

struct Person {
    char name[50];
    char dob[15];       // date of birth as string
    char mobile[15];    // mobile number as string
};

int main() {
    struct Person p = {"John Doe", "01/01/2000", "1234567890"};

    printf("Name: %s\n", p.name);
    printf("Date of Birth: %s\n", p.dob);
    printf("Mobile Number: %s\n", p.mobile);

    return 0;
}
/*

*/