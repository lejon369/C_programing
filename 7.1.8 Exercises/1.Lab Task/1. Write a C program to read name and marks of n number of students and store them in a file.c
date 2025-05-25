#include <stdio.h>

int main() {
    FILE *fptr;
    int n;
    char name[50];
    int marks;

    printf("Enter number of students: ");
    scanf("%d", &n);

    // Open file in write mode
    fptr = fopen("students.txt", "w");
    if (fptr == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    for (int i = 0; i < n; i++) {
        printf("Enter name of student %d: ", i + 1);
        scanf("%s", name);  // reads a single word name
        printf("Enter marks of student %d: ", i + 1);
        scanf("%d", &marks);

        fprintf(fptr, "%s %d\n", name, marks);
    }

    fclose(fptr);
    printf("Data saved to students.txt\n");

    return 0;
}


/*
#include <stdio.h>

int main() {
    FILE *file;
    int n, marks;
    char name[50];

    printf("How many students? ");
    scanf("%d", &n);

    file = fopen("students.txt", "w");
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
    printf("Data saved!\n");

    return 0;
}

*/