#include <stdio.h>
int main()
{
    int n;

    printf("Enter value: ");
    scanf("%d", &n);

    for (int i = 1;  i <= n; i++)
    {
        if (i % 2 == 0)
        {
            printf("Your even no: %d\n", i);
        }
    }

    return 0;
}
