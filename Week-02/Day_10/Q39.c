// Write a program to Print number pyramid. 
//      1 
//     121 
//    12321 
//   1234321 
//  123454321 

// Approach Used : Nested for loop
// Difficulty : More than Medium
// Concept Used : For Loop

#include<stdio.h>

int main()
{
    int n, i, j;
    printf("Enter the number of rows: ");
    scanf("%d", &n);
    
    for (i = 1; i <= n; i++)                // Outer loop for rows
    {
        for (j = 1; j <= n - i; j++)            // Inner loop for spaces
        {
            printf(" ");               // Print space
        }
        for (j = 1; j <= i; j++)                // Inner loop for increasing numbers
        {
            printf("%d", j);             // Print the current number
        }
        for (j = i - 1; j >= 1; j--)            // Inner loop for decreasing numbers
        {
            printf("%d", j);             // Print the current number
        }
        printf("\n");                  // Move to the next line
    }
    return 0;





}
