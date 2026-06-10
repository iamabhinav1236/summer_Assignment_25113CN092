// Write a program to Print star pyramid. 
//     * 
//    *** 
//   ***** 
//  ******* 
// ********* 

// Approach Used : Nested for loop
// Difficulty : Medium (Learnt the way to print spaces and stars in the correct order to form a pyramid)
// Concept Used : Use of For Loop

#include <stdio.h>

int main() 
{
    int n, i, j, k;             // Declare variables 
    printf("Enter the number of rows: ");
    scanf("%d", &n);
    
    for (int i = 1; i <= n; i++)                // Outer loop for rows
    {
        for (int j = 1; j <= n - i; j++)            // Inner loop for spaces
        {
            printf(" ");               // Print space
        }
        for (int k = 1; k <= 2 * i - 1; k++)            // Inner loop for stars
        {
            printf("*");            // Print star 
        }
        printf("\n");           // Move to the next line
    }
    return 0;
}