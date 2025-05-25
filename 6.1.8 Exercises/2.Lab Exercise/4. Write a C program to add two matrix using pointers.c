#include <stdio.h>

int main() {
    int a[10][10], b[10][10], sum[10][10];
    int *p1, *p2, *p3;
    int rows, cols;

    printf("Enter number of rows and columns: ");
    scanf("%d %d", &rows, &cols);

    printf("Enter elements of first matrix:\n");
    for (int i = 0; i < rows; i++)
        for (int j = 0; j < cols; j++)
            scanf("%d", &a[i][j]);

    printf("Enter elements of second matrix:\n");
    for (int i = 0; i < rows; i++)
        for (int j = 0; j < cols; j++)
            scanf("%d", &b[i][j]);

    p1 = &a[0][0];
    p2 = &b[0][0];
    p3 = &sum[0][0];

    // Add matrices using pointers
    for (int i = 0; i < rows * cols; i++) {
        *(p3 + i) = *(p1 + i) + *(p2 + i);
    }

    printf("Sum of matrices:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++)
            printf("%d ", sum[i][j]);
        printf("\n");
    }

    return 0;
}
/*
#include <stdio.h>

int main() {
    int a[10][10], b[10][10], sum[10][10];
    int *p1, *p2, *p3;
    int rows, cols;

    printf("Enter rows and columns: ");
    scanf("%d %d", &rows, &cols);

    printf("Enter first matrix:\n");
    for (int i = 0; i < rows; i++)
        for (int j = 0; j < cols; j++)
            scanf("%d", &a[i][j]);

    printf("Enter second matrix:\n");
    for (int i = 0; i < rows; i++)
        for (int j = 0; j < cols; j++)
            scanf("%d", &b[i][j]);

    p1 = &a[0][0];
    p2 = &b[0][0];
    p3 = &sum[0][0];

    for (int i = 0; i < rows * cols; i++)
        *(p3 + i) = *(p1 + i) + *(p2 + i);

    printf("Sum matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++)
            printf("%d ", sum[i][j]);
        printf("\n");
    }

    return 0;
}

*/