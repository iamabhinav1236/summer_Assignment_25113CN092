// Write a program to Compress a string. 

// Approach Used- Iterate the string, count consecutive occurrences of each character, and append character followed by its count
// Difficulty Level- Medium
// Concept Used- Use of functions, loops, if-else conditions, strings and arrays.

#include <stdio.h>

void compressString(char str[]);                        // Function Declaration

int main() 
{
    char str[200];                  // Initialize string
    
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);                  // Input string (with spaces)
    
    printf("Compressed string = ");
    compressString(str);                  // Calling function
    
    return 0;
}

void compressString(char str[])                     // Function Definition
{
    int i = 0, count;
    char current;
    
    while (str[i] != '\0' && str[i] != '\n')             // Ignore newline from fgets
    {
        current = str[i];
        count = 1;
        
        while (str[i + 1] == current)               // Count consecutive occurrences
        {
            count++;
            i++;
        }
        
        printf("%c%d", current, count);        // Print character and count
        i++;
    }
}
