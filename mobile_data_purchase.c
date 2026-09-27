/*
Author:Benjamin Manoti
Reg Number:BCS-05-0064/2026
Description:Mobile Data Purchase
Date:27/09/2026
Version:1
*/

#include <stdio.h>

int main(int argc, char** argv)
{
	int choice;
	 
    //Menu Display
    printf("1. 100MB @ 50 KES \n");
	printf("2. 500MB @200 KES \n");
	printf("3. 1GB @350 KES \n");
	printf("4. 2GB @600 KES \n");
	
	//Prompt the user 
	printf("Enter your prefered bundle:");
	scanf("%d",&choice);
	
	// Use switch to display the selected bundle and cost
    switch (choice) {
        case 1:
            printf("You selected 100MB. Cost = 50 KES\n");
            break;
        case 2:
            printf("You selected 500MB. Cost = 200 KES\n");
            break;
        case 3:
            printf("You selected 1GB. Cost = 350 KES\n");
            break;
        case 4:
            printf("You selected 2GB. Cost = 600 KES\n");
            break;
        default:
            printf("Invalid choice\n");
            break;
    }

    return 0;
}

	