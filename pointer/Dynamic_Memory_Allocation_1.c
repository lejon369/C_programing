#include <stdio.h>
//required for malloc and free
#include<stdio.h>

int main (){
{
    int *ptr ;
    //allocates memory fot one integer
    ptr =(int*) malloc(sizeof(int));

    if (ptr == NULL)
    {
        printf("Memory allocated memory failed !\n\n");
        return 1;
    }
    //Assign value to allocated memory
    *ptr =100;
    printf("Value: %d\n",*ptr);

    //free allocate memory
    free(ptr);
}
return 0;
}

