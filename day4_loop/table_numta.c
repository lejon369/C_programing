#include<stdio.h>
int main (){

    int t,i;
        printf("who table you want: ");
        scanf("%d", &t);

        for(int i = 1; i <= 10; i ++){
            printf("%dX%d = %d\n", t,i,t*i);
        }
return 0;
}
