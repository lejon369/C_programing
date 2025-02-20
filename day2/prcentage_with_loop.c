#include<stdio.h>

int main(){
    int n;

    printf("enter percentage ",n);
    scanf("%d", &n);

    //more than 80 --> A
    //more than 60 --> B
    //more than 40 --> C
    //more than 40 --> D

    if(n>80){
        printf("Grade A");
    } else if(n>60){
         printf("Grade B");
    } else if(n>40){
         printf("Grade C");
    } else {
         printf("Grade D");
    }

    return 0;
}
