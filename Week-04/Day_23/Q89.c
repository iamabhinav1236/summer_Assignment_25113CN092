// Write a program to Find first non-repeating character. 

// Approach Used- Count frequency of each character, then iterate the string again to find the first character with frequency 1
// Difficulty Level- Medium(Learnt this code from Google)
// Concept Used- use of functions, loops, if-else conditions, strings and arrays.

#include <stdio.h>

char firstNonRepeating(char str[]);                 // Function Declaration

int main() 
{
    char str[200];               // Initialize string
    
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);               // Input string (with spaces)
    
    char result = firstNonRepeating(str);                    // Calling function
    
    if (result != '\0') 
    {
        printf("First non-repeating character = '%c'\n", result);
    } 
    else 
    {
        printf("No non-repeating character found.\n");
    }

    return 0;
}

char firstNonRepeating(char str[])                  // Function Definition
{
    int freq[256] = {0};              // Frequency array for all ASCII characters
    int i = 0;
    
    while (str[i] != '\0') 
    {
        freq[(unsigned char)str[i]]++;              // Count frequency
        i++;
    }
    
    i = 0;
    while (str[i] != '\0') 
    {
        if (freq[(unsigned char)str[i]] == 1 && str[i] != '\n') 
        {
            return str[i];               // First non-repeating character
        }
        i++;
    }
    return '\0';                         // If none found
}
