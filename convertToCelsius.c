/*
Author:Benjamin Manoti
Reg Number:BCS-O5-0064/2026
Description:CONVERT TO CELSIUS
Date:26/10/2026
Version:1
*/

#include <stdio.h>

// Function to convert Fahrenheit to Celsius
double convertToCelsius(double fahrenheit) {
    return (fahrenheit - 32.0) * (5.0 / 9.0);
}

int main() {
    double fahrenheit;

    
    printf("Enter temperature in Fahrenheit: ");
    scanf("%lf", &fahrenheit);

    
    double celsius = convertToCelsius(fahrenheit);
    
    printf("Temperature: %.1f°F\n", fahrenheit);
    printf("Converted Temperature: %.2f°C\n", celsius);

    return 0;
}