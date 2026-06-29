// Write a program to Find first repeating character. 

// Approach Used- Iterate the string, keep track of character frequencies, and return the first character that appears more than once
// Difficulty Level- Medium
// Concept Used- use of functions, loops, if-else conditions, strings and arrays.

#include <stdio.h>

char firstRepeating(char str[]);                 // Function Declaration

int main() 
{
    char str[200];               // Initialize string
    
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);                          // Input string (with spaces)
    
    char result = firstRepeating(str);                   // Calling function
    
    if (result != '\0') 
    {
        printf("First repeating character = '%c'\n", result);
    } 
    else 
    {
        printf("No repeating character found.\n");
    }

    return 0;
}

char firstRepeating(char str[])                  // Function Definition
{
    int freq[256] = {0};              // Frequency array for all ASCII characters
    int i = 0;
    
    while (str[i] != '\0') 
    {
        if (str[i] != '\n')           // Ignore newline from fgets
        {
            freq[(unsigned char)str[i]]++;
            if (freq[(unsigned char)str[i]] == 2) 
            {
                return str[i];        // First character to repeat
            }
        }
        i++;
    }
    return '\0';                      // If none found
}
