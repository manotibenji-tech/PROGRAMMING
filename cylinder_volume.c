//Benjamin Manoti
//BCS-O5-0064/2026
//Weekly assignment:Volume and Surface area of a Cylinder
 
#include <stdio.h>
#define PI 3.14159

int main(int argc, char** argv)
{
	//declare and initialize variables 
	double radius, height, volume, surface_area; //&lf
	
	//prompt the user for input
	printf("Enter the radius of the cylynder: ");
	scanf("%lf" ,&radius);
	
	printf("Enter the height of the cylinder: ");
	scanf("%lf" ,&height);
	
	//Calculate the volume and surface area
	volume = PI * radius * radius * height;
	surface_area = 2 * PI * radius * radius + 2 * PI * radius * height;
    
    //Display results
    printf("Volume of the cylynder: %.2lf\n", volume);
    printf("Surface area of the cylinder: %.2lf\n", surface_area);
    
	return 0;
}