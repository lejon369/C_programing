#include<stdio.h>

int main(){


            int i = 2;

            int j = ++i;
            int k = ++i + i;
            int l = ++i+i+ i++ + ++i;

            printf("%d\n %d\n %d\n", j, k ,l);



return 0;
}
