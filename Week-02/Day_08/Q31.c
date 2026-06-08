// Write a program to Print character triangle. 
//  A 
//  AB 
//  ABC 
//  ABCD 
//  ABCDE 

// Approach Used : Nested for loop
// Difficulty : Easy
// Concept Used : Use of For Loop

#include <stdio.h>

int main()
{
    int n, i, j;
    char ch;
    printf("Enter the number of rows: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)                // Outer loop for rows
    {
        ch = 'A';                   // Initialize the character to A
        for (j = 1; j <= i; j++)                  // Inner loop for columns
        {
            printf("%c ", ch);                    // Print the current character and a space
            ch++;                       // Increment the character 
        }
        printf("\n");                   // Move to the next line
    }
    return 0;
}