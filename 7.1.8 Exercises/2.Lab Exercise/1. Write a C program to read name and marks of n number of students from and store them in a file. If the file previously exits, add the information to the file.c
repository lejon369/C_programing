#include <stdio.h>

int main() {
    FILE *file;
    int n, marks;
    char name[50];

    printf("Enter number of students: ");
    scanf("%d", &n);

    // Open file in append mode
    file = fopen("students.txt", "a");
    if (file == NULL) {
        printf("Cannot open file.\n");
        return 1;
    }

    for (int i = 0; i < n; i++) {
        printf("Name: ");
        scanf("%s", name);
        printf("Marks: ");
        scanf("%d", &marks);

        fprintf(file, "%s %d\n", name, marks);
    }

    fclose(file);
    printf("Data added to students.txt\n");

    return 0;
}
