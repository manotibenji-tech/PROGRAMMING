/*
Author:Benjamin Manoti
Reg Number:BCS-O5-0064/2026
Description:Bank Loan Program
Date:
Version:
*/

#include <stdio.h>

int main(int argc, char** argv)
{
 int age;
 double income;
 
 //Prompt the user for age 
 printf("Please enter your age");
 scanf("%d",&age);
 
 //Prompt the user for his/her annual income
 printf("Please enter your annual income");
 scanf("%lf",&income);
 
 //Eligibility test
 if (age>=18 &income>=21000){
	 printf("Congratulations you are eligible for this loan.\n");
 } else
 {
	 printf("Unfortunately you are not eligible for this loan.\n");
	 
	 return 0;
 }
 
 
 
 
 
  	
	return 0;
}