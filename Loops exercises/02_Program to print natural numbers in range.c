#include<stdio.h>
int main(){
    int start,end;

    printf("Statr value ");
    scanf("%d",&start);

    printf("end value ");
    scanf("%d",&end);

    for(int i=start;i<end;i++){
        printf("Your range are: %d\n",i);
    }

return 0;
}
