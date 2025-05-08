#include <stdio.h>
int main()
{
int x = 42;
int *ptr = &x;
// Dereferencing to get value
printf("Value of x: %d\n", *ptr);
return 0;
}
