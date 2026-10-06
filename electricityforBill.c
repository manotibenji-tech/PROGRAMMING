/*
Author:Benjamin Manoti
Reg Number:BCS-O5-0064/2026
Description:
Date:4/O9/2026
Version:
*/

#include <stdio.h>

int main() {
    float units[10];
    int i;

    // Loop to collect electricity consumption for 10 households
    printf("=== Input Electricity Consumption ===\n");
    for (i = 0; i < 10; i++) {
        printf("Enter electricity units consumed for Household %d: ", i + 1);
        scanf("%f", &units[i]);
    }

    // Loop to display the entered consumption for each household
    printf("\n=== Electricity Consumption Summary ===\n");
    for (i = 0; i < 10; i++) {
        printf("Household %d: %.2f units\n", i + 1, units[i]);
    }

    return 0;
}