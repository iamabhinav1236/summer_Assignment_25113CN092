// Write a program to Print repeated character pattern. 
// A 
// BB 
// CCC 
// DDDD 
// EEEEE

// Approach Used : Nested for loop
// Difficulty : Easy
// Concept Used : For Loop

#include <stdio.h>

int main() 
{
    int n, i, j;
    char ch;
    printf("Enter the number of rows: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)                // Outer loop for rows
    {
        ch = 'A' + i - 1;                   // Calculating the character to print
        for (j = 1; j <= i; j++)             // Inner loop for columns
        {
            printf("%c ", ch);                // Print the current character and a space
        }
        printf("\n");                       // Move to the next line
    }
    return 0;
}
