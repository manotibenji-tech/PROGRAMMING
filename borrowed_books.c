#include <stdio.h>

int main() {
    FILE *fptr;
    char title[100];

    // Open file in append mode
    fptr = fopen("borrowed_books.txt", "a");

    // Check whether file opened successfully
    if (fptr == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    // Ask librarian to enter book title
    printf("Enter book title: ");
    fgets(title, sizeof(title), stdin);

    // Store title in the file
    fprintf(fptr, "%s", title);

    // Close the file
    fclose(fptr);

    // Confirmation message
    printf("Book title successfully stored!\n");

    return 0;
}