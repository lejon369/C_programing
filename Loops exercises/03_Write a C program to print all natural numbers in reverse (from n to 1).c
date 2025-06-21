#include<stdio.h>
int main(){
    int n;
    
    printf("Enter value: ");
    scanf("%d",&n);

    for(int i=n;i>=1;i--){
        printf("Your range are: %d\n",i);
    }

return 0;
}
