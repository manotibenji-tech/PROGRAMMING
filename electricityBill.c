


#include <stdio.h>

int main()
{
	int household;
	float units;
	
	printf("================================ \n");
	printf("Electricity Bill Prer Household \n");
	printf("================================ \n");
	
	for(household=1;household<=10;household++){
		
		printf("Enter the number of units consumed for household %d \t",household);
		scanf("%f",&units );
		printf("Bill is Ksh %f \n",units *10);
	}
	return 0;
}