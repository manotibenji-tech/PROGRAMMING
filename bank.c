//Benjamin Manoti 
//BCS-05-0064/2026
//Weekly assignment week 1 task 2


#include <stdio.h>

int main() {
    float height;
    double bank_balance;
    char phone_number[15];  // Assuming max 14 digits + null terminator

    // Prompt user for height
    printf("Enter your height (in meters or centimeters): ");
    scanf("%f", &height);

    // Prompt user for bank balance
    printf("Enter your bank balance (in Kenya shillings): ");
    scanf("%lf", &bank_balance);

    // Prompt user for phone number
    printf("Enter your phone number: ");
    scanf("%s", phone_number);

    // Display the collected information
    printf("\nYou entered:\n");
    printf("Height: %.2f\n", height);
    printf("Bank Balance: %.2lf KES\n", bank_balance);
    printf("Phone Number: %s\n", phone_number);

    return 0;
}
