// Incrementing a Pointer
#include <stdio.h>
int main()
{
int arr[] = {10, 20, 30, 40};
// Points to first element
int *ptr = arr;
printf("First element: %d\n", *ptr);
// Moves to next ptr++;
printf("Second element: %d\n", *ptr);
return 0;
}
