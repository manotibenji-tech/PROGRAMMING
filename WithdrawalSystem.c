/*
Author:Benjamin Manoti
Reg Number:BCS-O5-0064/2026
Description:WITHDRAWAL SYSTEM
Date:4/O9/2026
Version:
*/


#include <stdio.h>

int main() {
    float balance = 50000.0;
    float withdraw;

    printf("ATM Withdrawal System\n");
    printf("Initial Balance: KSh %.2f\n", balance);
    printf("Enter 0 to exit.\n\n");

    while (1) { // infinite loop, we will break when needed
        printf("Enter withdrawal amount: KSh ");
        scanf("%f", &withdraw);

        // Condition 1: Stop if customer enters 0
        if (withdraw == 0) {
            printf("Transaction ended. Thank you!\n");
            break;
        }

        // Condition 2: Stop if withdrawal is more than balance
        if (withdraw > balance) {
            printf("Insufficient balance! Your balance is KSh %.2f\n", balance);
            printf("Transaction stopped.\n");
            break;
        }

        // Condition 3: Valid withdrawal
        if (withdraw > 0) {
            balance = balance - withdraw;
            printf("Withdrawal successful. Remaining balance: KSh %.2f\n\n", balance);
        } else {
            printf("Invalid amount! Please enter a positive amount.\n\n");
        }
    }

    printf("Final Balance: KSh %.2f\n", balance);
    return 0;
}




