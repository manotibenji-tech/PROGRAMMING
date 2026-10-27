/*
Author:Benjamin Manoti
Reg Number:BCS-O5-0064/2026
Description:HOTEL MANAGEMENT SYSTEM
Date:26/10/2026
Version:1
*/

#include <stdio.h>

int main() {
    
    double revenue[7];
    double totalRevenue = 0.0;
    
    printf("=== Weekly Revenue Tracker ===\n");
    for (int i = 0; i < 7; i++) {
        printf("Enter revenue for Day %d: KSh. ", i + 1);
        scanf("%lf", &revenue[i]);
        totalRevenue += revenue[i];
    }
    
    double averageRevenue = totalRevenue / 7.0;
    
    printf("\n--- Revenue Summary ---\n");
    printf("Total Weekly Revenue: KSh. %.2f\n", totalRevenue);
    printf("Average Daily Revenue: KSh. %.2f\n\n", averageRevenue);

    
    int occupancy[5][10];
    
    printf("=== Room Occupancy Input (One Branch) ===\n");
    printf("Enter 1 for occupied or 0 for vacant for each room.\n");
    
    for (int floor = 0; floor < 5; floor++) {
        printf("\n--- Floor %d ---\n", floor + 1);
        for (int room = 0; room < 10; room++) {
            printf("Room %d status (1/0): ", room + 1);
            scanf("%d", &occupancy[floor][room]);
        }
    }

    // Display occupied and vacant rooms per floor
    printf("\n--- Floor Occupancy Summary ---\n");
    for (int floor = 0; floor < 5; floor++) {
        int occupiedCount = 0;
        int vacantCount = 0;
        
        for (int room = 0; room < 10; room++) {
            if (occupancy[floor][room] == 1) {
                occupiedCount++;
            } else {
                vacantCount++;
            }
        }
        printf("Floor %d -> Occupied Rooms: %d | Vacant Rooms: %d\n", floor + 1, occupiedCount, vacantCount);
    }
    printf("\n");

    
    int chain[3][5][10];
    int totalChainOccupied = 0;

    printf("=== Multi-Branch Chain Occupancy Input ===\n");
    for (int b = 0; b < 3; b++) {
        printf("\n--- Branch %d ---\n", b + 1);
        for (int f = 0; f < 5; f++) {
            printf("Floor %d:\n", f + 1);
            for (int r = 0; r < 10; r++) {
                printf("  Room %d status (1/0): ", r + 1);
                scanf("%d", &chain[b][f][r]);
                
                if (chain[b][f][r] == 1) {
                    totalChainOccupied++;
                }
            }
        }
    }

    printf("\n=== Multi-Branch Chain Summary ===\n");
    printf("Total number of occupied rooms across all 3 branches: %d\n", totalChainOccupied);

    return 0;
}