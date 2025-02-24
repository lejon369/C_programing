#include<stdio.h>
int main (){

    //finding even number 1 to 100
    int n;

    printf("Enter a number even or odd :");
    scanf("%d",&n);

     for(int i=1; i < n; i++){
        if(i%2 == 0 ){
               printf("%d this is a even \n",i,n);
            }else {
                printf("%d odd number \n",i,n);
            };
                };
return 0;
}
