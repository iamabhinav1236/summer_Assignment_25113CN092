// Write a program to Sort names alphabetically. 

// Approach Used- Use strcmp() functionto compare strings and swap them if out of order; repeat until all names are sorted
// Difficulty Level- Medium (Learned)
// Concept Used- Use of functions, loops, if-else conditions, arrays, and string handling.

#include <stdio.h>
#include <string.h>

void sortNames(char names[][50], int n);                     // Function Declaration

int main() 
{
    int n, i;
    char names[100][50];                   // Array of strings
    
    printf("Enter number of names: ");
    scanf("%d", &n);
    
    printf("Enter %d names:\n", n);
    for (i = 0; i < n; i++) 
    {
        scanf("%s", names[i]);                   // Input names (without spaces)
    }
    
    sortNames(names, n);                   // Calling function
    
    printf("\nNames in alphabetical order:\n");

    for (i = 0; i < n; i++) 
    {
        printf("%s\n", names[i]);
    }
    
    return 0;
}

void sortNames(char names[][50], int n)                     // Function Definition
{
    int i, j;
    char temp[50];
    
    for (i = 0; i < n - 1; i++) 
    {
        for (j = i + 1; j < n; j++) 
        {
            if (strcmp(names[i], names[j]) > 0)                          // Compare strings
            {
                strcpy(temp, names[i]);
                strcpy(names[i], names[j]);
                strcpy(names[j], temp);
            }
        }
    }
}
