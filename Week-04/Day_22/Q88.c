// Write a program to Remove spaces from string. 

// Approach Used- Iterate the string character by character, copy only non-space characters into the same string
// Difficulty Level- Easy
// Concept Used- use of functions, loops, if-else conditions, strings and arrays.

#include <stdio.h>
void removeSpaces(char str[]);                 // Function Declaration

int main() 
{
    char str[200];               // Initialize string
    
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);   // Input string (with spaces)
    
    removeSpaces(str);                // Calling function to remove spaces
    
    printf("String after removing spaces = %s\n", str);

    return 0;
}

void removeSpaces(char str[])                  // Function Definition
{
    int i = 0, j = 0;
    
    while (str[i] != '\0') 
    {
        if (str[i] != ' ')             // Copy only non-space characters
        {
            str[j] = str[i];
            j++;
        }
        i++;
    }
    str[j] = '\0';                     // Null terminate the modified string
}
