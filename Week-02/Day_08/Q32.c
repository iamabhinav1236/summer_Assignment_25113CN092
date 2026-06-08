// Write a program to Print repeated-number pattern. 
// 1 
// 22 
// 333 
// 4444 
// 55555 

// Approach Used : Nested for loop
// Difficulty : Easy
// Concept Used : Use of For Loop

#include <stdio.h>

int main() 
{
    int n, i, j;
    printf("Enter the number of rows: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)                // Outer loop for rows
    {
        for (j = 1; j <= i; j++)                // Inner loop for columns
        {
            printf("%d ", i);                   // Print the current number and a space
        }
        printf("\n");            // Move to the next line       
    }
    return 0;
}