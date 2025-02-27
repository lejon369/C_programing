#include<stdio.h>
int main(){
    int n;
    printf("Enter a value :");
    scanf("%d ", &n);

  for (int i = 2; i <= n-1 ; i++){
        if(n%i == 0){
            printf("composite ");
            break;
        }
  };

return 0;
}


