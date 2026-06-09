// Write a program to Print hollow square pattern. 
// ***** 
// *   * 
// *   * 
// *   * 
// ***** 

// Approach Used : Nested for loop
// Difficulty : Easy
// Concept Used : For Loop

#include <stdio.h>

int main() 
{
    int n, i, j;
    printf("Enter the number of rows: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)                // Outer loop for rows
    {
        for (j = 1; j <= n; j++)             // Inner loop for columns  
        {
            if (i == 1 || i == n || j == 1 || j == n)           // Check if it's the first or last row, or the first or last column
            {
                printf("* ");               // Print star and a space
            }
            else 
            {
                printf("  ");               // Print two spaces for the hollow part of the square
            }
        }
        printf("\n");                   // Move to the next line
    }
    return 0;
}
