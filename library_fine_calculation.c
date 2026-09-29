/*
Author:Benjamin Manoti
Registration number:BCS-05-0064/2026
Description:Library fine calculation
Date:24/09/2026
Version 1
*/
 
#include <stdio.h>

int main(int argc, char** argv) {
    // Variable declarations
    int bookID, dueDate, returnDate;
    int daysOverdue;
    int fineRate = 0;
    int fineAmount = 0;

    // User input
    printf("Enter Book ID:\t");
    scanf("%d", &bookID);

    printf("Enter due date:\t");
    scanf("%d", &dueDate);

    printf("Enter return date:\t");
    scanf("%d", &returnDate);

    // Calculate days overdue
    daysOverdue = returnDate - dueDate;

    // Determine fine rate and total fine
    if (daysOverdue <= 0) {
        fineRate = 0;
        fineAmount = 0;
    } else if (daysOverdue <= 7) {
        fineRate = 20;
        fineAmount = daysOverdue * fineRate;
    } else if (daysOverdue >= 8 && daysOverdue <= 14) {
        fineRate = 50;
        fineAmount = daysOverdue * fineRate;
    } else {
        fineRate = 100;
        fineAmount = daysOverdue * fineRate;
    }

    // Display the results
    printf("\nLibrary Fine Details:\n");
    printf("Book ID: %d\n", bookID);
    printf("Due Date: %d\n", dueDate);
    printf("Return Date: %d\n", returnDate);
    printf("Days Overdue: %d\n", daysOverdue);
    printf("Fine Rate: Ksh %d per day\n", fineRate);
    printf("Fine Amount: Ksh %d\n", fineAmount);

    return 0;
}