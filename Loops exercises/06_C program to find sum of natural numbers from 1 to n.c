#include<stdio.h>
int main(){
    int n,sum=0;


    printf("enter value ");
    scanf("%d",&n);

    for(int i=1;i<=n;i++){
        sum += i;
        printf("%d. Your range are: %d\n",i,sum);
    }

return 0;
}
