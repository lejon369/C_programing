#include<stdio.h>

int main(){
    int ram,shyam,ajay;

    printf("this is a side of triangle : ",ram);
    scanf("%d", &ram);

    printf("this is a side of triangle : ",shyam);
    scanf("%d", &shyam);

    printf("this is a side of triangle : ",ajay);
    scanf("%d", &ajay);

    if(ram>ajay && ram>shyam ){

        printf("younger age %d", ram);

    }if (shyam>ram && shyam>ajay){

       printf("younger age %d", shyam);

    }if (ajay>ram && ajay>shyam){
        printf("Yyounger age %d", ajay);
    }

return 0;
}
