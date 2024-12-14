#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Define the maximum number of students
#define MAX_STUDENTS 100
#define FILE_NAME "students.txt"

// Define the structure for a student
struct Student {
    int id;
    char name[50];
    int age;
    char grade[5];
};

// Declare an array of students and a counter for the number of students
struct Student students[MAX_STUDENTS];
int studentCount = 0;

// Function prototypes
void addStudent();
void displayStudents();
void deleteStudent();
void saveToFile();
void loadFromFile();

int main() {
    loadFromFile();

    int choice;

    while (1) {
        printf("\nStudent Record System\n");
        printf("1. Add Student\n");
        printf("2. Display Students\n");
        printf("3. Delete Student\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                addStudent();
                break;
            case 2:
                displayStudents();
                break;
            case 3:
                deleteStudent();
                break;
            case 4:
                saveToFile();
                exit(0);
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }

    return 0;
}

void addStudent() {
    if (studentCount >= MAX_STUDENTS) {
        printf("Cannot add more students. Maximum limit reached.\n");
        return;
    }

    struct Student s;
    printf("Enter student ID: ");
    scanf("%d", &s.id);
    printf("Enter student name: ");
    scanf("%s", s.name);
    printf("Enter student age: ");
    scanf("%d", &s.age);
    printf("Enter student grade: ");
    scanf("%s", s.grade);

    students[studentCount++] = s;
    saveToFile();
    printf("Student added successfully.\n");
}

void displayStudents() {
    if (studentCount == 0) {
        printf("No students to display.\n");
        return;
    }

    printf("\nStudent Records:\n");
    printf("ID\tName\t\tAge\tGrade\n");
    for (int i = 0; i < studentCount; i++) {
        printf("%d\t%s\t\t%d\t%s\n", students[i].id, students[i].name, students[i].age, students[i].grade);
        printf("---------------------------------------------");
    }
}

void deleteStudent() {
    if (studentCount == 0) {
        printf("No students to delete.\n");
        return;
    }

    int id;
    printf("Enter student ID to delete: ");
    scanf("%d", &id);

    int found = 0;
    for (int i = 0; i < studentCount; i++) {
        if (students[i].id == id) {
            found = 1;
            for (int j = i; j < studentCount - 1; j++) {
                students[j] = students[j + 1];
            }
            studentCount--;
            saveToFile();
            printf("Student deleted successfully.\n");
            break;
        }
    }

    if (!found) {
        printf("Student with ID %d not found.\n", id);
    }
}

void saveToFile() {
    FILE *file = fopen(FILE_NAME, "w");
    if (file == NULL) {
        printf("Error opening file for writing.\n");
        return;
    }

    for (int i = 0; i < studentCount; i++) {
        fprintf(file, "%d %s %d %s\n", students[i].id, students[i].name, students[i].age, students[i].grade);
    }

    fclose(file);
}

void loadFromFile() {
    FILE *file = fopen(FILE_NAME, "r");
    if (file == NULL) {
        return;  // No file exists yet
    }

    while (fscanf(file, "%d %s %d %s", &students[studentCount].id, students[studentCount].name, &students[studentCount].age, students[studentCount].grade) != EOF) {
        studentCount++;
    }

    fclose(file);
}
