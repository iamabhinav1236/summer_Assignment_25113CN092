// Write a program to Print number triangle. 
// 1 
// 12 
// 123 
// 1234 
// 12345 

// Approach Used : Nested for loop
// Difficulty : Easy
// Concept Used : Use of For Loop

#include <stdio.h>

int main() 
{
    int n, i, j;
    printf("Enter the number of rows: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)            // Outer loop for rows
    {
        for (j = 1; j <= i; j++)            // Inner loop for columns
        {
            printf("%d ", j);               // Print the current number and a space
        }
        printf("\n");                  // Move to the next line
    }
    return 0;
}