// Accessing Array Elements Using Pointers
#include <stdio.h>
int main() {
int arr[] = {1, 2, 3, 4, 5};
// Pointer points to first element
int *ptr = arr;
for (int i = 0; i < 5; i++)
{
printf("Value at arr[%d]: %d\n", i, *(ptr + i));
}
return 0;
}
