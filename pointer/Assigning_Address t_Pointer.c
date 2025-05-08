#include <stdio.h>
int main()
{
int num = 10;
int *ptr = &num; // Store address of num in ptr
printf("Address of num: %p\n", &num);
printf("Address stored in ptr: %p\n", ptr);
printf("Value of num using pointer: %d\n", *ptr);
// Dereferencing
return 0;
}
