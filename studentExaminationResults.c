
#include <stdio.h>
#include <stdlib.h>

// Step 1: Define the structure
struct Student {
    char name[50];
    char regNo[20];
    float marks;
};

int main() {

    // Step 2: Create a structure variable
    struct Student student;

    FILE *fptr;

    // Step 3: Open the binary file
    fptr = fopen("results.dat", "rb");

    // Step 4: Check if file opened
    if (fptr == NULL) {
        printf("Error opening file!");
        return 1;
    }

    // Step 5: Read and display student records
    while (fread(&student, sizeof(student), 1, fptr) == 1) {

        printf("Student Name: %s\n", student.name);

        printf("Total Marks: %.2f\n", student.marks);

        printf("----------------------\n");
    }

    // Step 6: Close the file
    fclose(fptr);

    return 0;
}
