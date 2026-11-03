
#include <stdio.h>
#include <stdlib.h>

int main() {

    FILE *fptr;
    float amount, total = 0;

    // Open the file in read mode
    fptr = fopen("sales.txt", "r");

    // Check if file opened successfully
    if (fptr == NULL) {
        printf("Error opening sales.txt!");
        return 1;
    }

    // Read all transaction amounts
    while (fscanf(fptr, "%f", &amount) == 1) {

        total = total + amount;

    }

    // Display total sales
    printf("Total sales for the day: %.2f\n", total);

    // Close the file
    fclose(fptr);

    printf("File closed successfully.\n");

    return 0;
}
