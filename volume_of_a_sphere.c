



#include <stdio.h>
#define PI 3.14159

int main(int argc, char** argv)
{
	//Declare our double variables
	double radius,volume;
	
	//Prompt user for input
	printf("Enter the radius of the sphere: ");
	scanf("%lf" ,&radius);
	
	//Calculate volume (using 4.0/3.0 to prevent integer division)
	volume=(4.0/3.0)*PI*(radius*radius*radius);
	
// Check for negative radius FIRST
    if (radius < 0) {
        printf("Error: Radius cannot be negative.\n");
        return 1; //Exits the program so it doesnt calculate bad math
	}	
	
	//Display the results rounded off to two decimal places
	printf("Volume of the sphere: %.2lf\n", volume);
	
	return 0;
}