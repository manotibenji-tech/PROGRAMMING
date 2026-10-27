/*
Author:Benjamin Manoti
Reg Number:BCS-O5-0064/2026
Description:FARE CALCULATOR
Date:26/10/2026
Version:1
*/

#include <stdio.h>

// Function to calculate the total fare based on distance
double calculateFare(double distance) {
    double ratePerKm = 50.0; // Fare rate in KSh per kilometer
    return distance * ratePerKm;
}

int main() {
    double distance;

    // Prompt the user to enter the distance traveled
    printf("Enter the distance traveled (in km): ");
    scanf("%lf", &distance);

    // Validate that distance is not negative
    if (distance < 0) {
        printf("Error: Distance cannot be negative.\n");
    } else {
        // Call the function and print the result
        double totalFare = calculateFare(distance);
        printf("Distance: %.2f km\n", distance);
        printf("Total Fare: KSh. %.2f\n", totalFare);
    }

    return 0;
}