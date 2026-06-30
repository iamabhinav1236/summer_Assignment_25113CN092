// Write a program to Sort words by length. 

// Approach Used- Split the sentence into words, measure each word’s length, and sorting them using simple comparison
// Difficulty Level- Medium
// Concept Used- Use of functions, loops, if-else conditions, arrays, and string handling.

#include <stdio.h>
#include <string.h>

void sortWordsByLength(char words[][50], int n);                 // Function Declaration

int main() 
{
    int n, i;
    char words[100][50];                        // Array of words
    
    printf("Enter number of words: ");
    scanf("%d", &n);
    
    printf("Enter %d words:\n", n);
    for (i = 0; i < n; i++) 
    {
        scanf("%s", words[i]);                            // Input words (without spaces)
    }
    
    sortWordsByLength(words, n);                     // Calling function
    
    printf("\nWords sorted by length:\n");
    for (i = 0; i < n; i++) 
    {
        printf("%s\n", words[i]);
    }
    
    return 0;
}

void sortWordsByLength(char words[][50], int n)                  // Function Definition
{
    int i, j;
    char temp[50];
    
    for (i = 0; i < n - 1; i++) 
    {
        for (j = i + 1; j < n; j++) 
        {
            if (strlen(words[i]) > strlen(words[j]))   // Compare lengths
            {
                strcpy(temp, words[i]);
                strcpy(words[i], words[j]);
                strcpy(words[j], temp);
            }
        }
    }
}
