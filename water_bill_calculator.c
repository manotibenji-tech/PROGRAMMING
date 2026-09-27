/*
Author:Benjamin Manoti 
Reg Number:BCS-05-0064/2026
Description:Water Bill Calculator
Date:27/09/2026
Version:1
*/

#include <stdio.h>

int main(int argc, char** argv)
{
	//Define the variables
	double units,totalBill;
	
	//Prompt the user for details
	printf("Enter the number of water units consumed:");
	scanf("%lf",&units);
	
	//For impossible units
	if (units<0){
		printf("Error.Units cant be negative \n");
		return 1;
	}
	
	//Check the units calculations
	if (units <=30 ){
		totalBill=units*20;
	}
	else if (units <=60){
		totalBill=units*25;
	}  
	else{
		totalBill=units*30;
	}
	 
	 //Display the results
	 printf("Total water bill= %.2lf KES.\n" ,totalBill);
	return 0;
}
