/*
Author:Benjamin Manoti
Reg Number:BCS-05-0064/2026
Description:Exam Eligibility
Date:27/09/2026
Version:1
*/

#include <stdio.h>

int main(int argc, char** argv)
{
	//Define the variables
	double attendance,marks;
	
	//Prompt the user
	printf("Enter your average attendance percentage:");
	scanf("%lf",&attendance);
	
	printf("Enter your average marks:");
	scanf("%lf",&marks);
	
	//Check eligibility
	if (attendance >=75 && marks >=40){
		printf("Eligible. \n");
	}
	else
	{ printf("Not eligible. \n");
		
	}
	return 0;
}

