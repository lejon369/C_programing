#include<stdio.h>

int main(){

    int sellPri,costPri;

    printf("Enter a selling PRices: ");
    scanf("%d",&sellPri);

    printf("Enter a selling costprices: ");
    scanf("%d",&costPri);

    if (sellPri > costPri)
    {
        int pro = sellPri - costPri;
        printf("You profit !! %d",pro);

    }else if (sellPri == costPri)
    {
        int pro1 = sellPri - costPri;
        printf("NO profit !! %d", pro1);
        
    }else
    {
        int loss = costPri - sellPri;
        printf("You loss !! %d",loss);
    }
    
        
    return 0;
}