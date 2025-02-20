#include<stdio.h>
int main(){

    int x,y;

    printf("Enter a value: ",x,y);
    scanf("%d %d",&x,&y);

    if(y==0){
        printf("line is x axis");

    }else if (x==0){
    printf("line is y axis");

    }else{
        printf("This is origin");
    }

return 0;
}
