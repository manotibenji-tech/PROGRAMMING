#include <stdio.h>

// Function declarations
void saveStudent();
void displayStudents();
void addStudent();

int main() {
    printf("--- Saving First Student ---\n");
    saveStudent();
    
    printf("\n--- Displaying Student Record ---\n");
    displayStudents();
    
    printf("\n--- Adding Another Student ---\n");
    addStudent();
    
    printf("\n--- Displaying All Student Records ---\n");
    displayStudents();
    
    return 0;
}

// a) Function to write the first student's details (Write mode "w")
void saveStudent() {
    FILE *fp;
    char admNo[20], name[50], course[50];
    
    fp = fopen("students.txt", "w");
    if (fp == NULL) {
        printf("Error opening file!\n");
        return;
    }
    
    printf("Enter Admission Number: ");
    scanf("%19s", admNo);
    printf("Enter Full Name: ");
    scanf(" %49[^\n]", name);
    printf("Enter Course: ");
    scanf(" %49[^\n]", course);
    
    fprintf(fp, "Admission No: %s\nName: %s\nCourse: %s\n\n", admNo, name, course);
    fclose(fp);
    printf("Student record saved successfully.\n");
}

// b) Function to read and display contents character by character (Read mode "r")
void displayStudents() {
    FILE *fp;
    int ch;
    
    fp = fopen("students.txt", "r");
    if (fp == NULL) {
        printf("File does not exist yet!\n");
        return;
    }
    
    while ((ch = fgetc(fp)) != EOF) {
        putchar(ch);
    }
    
    fclose(fp);
}

// c) Function to append another student without deleting previous ones (Append mode "a")
void addStudent() {
    FILE *fp;
    char admNo[20], name[50], course[50];
    
    fp = fopen("students.txt", "a");
    if (fp == NULL) {
        printf("Error opening file!\n");
        return;
    }
    
    printf("Enter Admission Number: ");
    scanf("%19s", admNo);
    printf("Enter Full Name: ");
    scanf(" %49[^\n]", name);
    printf("Enter Course: ");
    scanf(" %49[^\n]", course);
    
    fprintf(fp, "Admission No: %s\nName: %s\nCourse: %s\n\n", admNo, name, course);
    fclose(fp);
    printf("Student record added successfully.\n");
}