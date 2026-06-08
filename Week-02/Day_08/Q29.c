// Write a program to Print half pyramid pattern. 

// Approach Used : Nested for loop
// Difficulty : Easy
// Concept Used : Use ofFor Loop

#include <stdio.h>

int main() 
{
    int n, i, j;
    printf("Enter the number of rows: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)                // Outer loop for rows
    {
        for (j = 1; j <= i; j++)               // Inner loop for columns
        {
            printf("* ");               // Print star followed by a space
        }
        printf("\n");           // Move to the next line 
    return 0;
}

