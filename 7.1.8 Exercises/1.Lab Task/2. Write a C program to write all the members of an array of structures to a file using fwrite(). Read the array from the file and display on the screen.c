#include <stdio.h>

struct Student {
    char name[50];
    int marks;
};

int main() {
    struct Student students[5];
    FILE *file;
    int n = 5;

    // Input data for 5 students
    for (int i = 0; i < n; i++) {
        printf("Enter name of student %d: ", i + 1);
        scanf("%s", students[i].name);
        printf("Enter marks of student %d: ", i + 1);
        scanf("%d", &students[i].marks);
    }

    // Write array to file
    file = fopen("students.dat", "wb");
    if (file == NULL) {
        printf("Error opening file for writing.\n");
        return 1;
    }
    fwrite(students, sizeof(struct Student), n, file);
    fclose(file);

    // Clear array to show we are reading fresh
    for (int i = 0; i < n; i++) {
        students[i].name[0] = '\0';
        students[i].marks = 0;
    }

    // Read array from file
    file = fopen("students.dat", "rb");
    if (file == NULL) {
        printf("Error opening file for reading.\n");
        return 1;
    }
    fread(students, sizeof(struct Student), n, file);
    fclose(file);

    // Display data
    printf("\nStudents read from file:\n");
    for (int i = 0; i < n; i++) {
        printf("Name: %s, Marks: %d\n", students[i].name, students[i].marks);
    }

    return 0;
}
/*
#include <stdio.h>

struct Student {
    char name[50];
    int marks;
};

int main() {
    struct Student students[3];
    FILE *file;
    int i;

    // Input data
    for (i = 0; i < 3; i++) {
        printf("Name: ");
        scanf("%s", students[i].name);
        printf("Marks: ");
        scanf("%d", &students[i].marks);
    }

    // Write to file
    file = fopen("students.dat", "wb");
    fwrite(students, sizeof(struct Student), 3, file);
    fclose(file);

    // Clear array before reading
    for (i = 0; i < 3; i++) {
        students[i].name[0] = '\0';
        students[i].marks = 0;
    }

    // Read from file
    file = fopen("students.dat", "rb");
    fread(students, sizeof(struct Student), 3, file);
    fclose(file);

    // Display data
    printf("\nData from file:\n");
    for (i = 0; i < 3; i++) {
        printf("Name: %s, Marks: %d\n", students[i].name, students[i].marks);
    }

    return 0;
}

*/