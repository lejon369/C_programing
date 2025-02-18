#include<stdio.h>

int main(){
    int n;

    printf("enter a value :",n);
    scanf("%d",&n);

     if(n%5 == 0){
     if(n%3 == 0){
        printf("this is divide by 3 & 5");
     };
     }else{
        printf("invalid");
     }


return 0;
}
