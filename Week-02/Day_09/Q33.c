// Write a program to Print reverse star pattern. 
// ***** 
// **** 
// *** 
// ** 
// * 

// Approach Used : Nested for loop
// Difficulty : Easy
// Concept Used : For Loop

#include<stdio.h>

int main() 
{
    int n, i, j;
    printf("Enter the number of rows: ");
    scanf("%d", &n);
    for (i = n; i >= 1; i--)            // Outer loop for rows 
    {
        for (j = 1; j <= i; j++)            // Inner loop for columns
        {
            printf("* ");               // Print star and a space
        }
        printf("\n");                  // Move to the next line
    }
    return 0;
}