// Write a program to Find string length without strlen(). 

// Approach Used- Count the characters until the null character get encountered
// Difficulty Level- Easy
// Concept Used- Use of functions, loops, and strings.

#include <stdio.h>
int stringLength(char str[]);                   // Function Declaration

int main() 
{
    char str[100];               // Initialize string
    
    printf("Enter a string: ");
    scanf("%s", str);            // Input string (without spaces)
    
    int length = stringLength(str);        // Calling function to find length
    
    printf("Length of the string = %d\n", length);

    return 0;
}

int stringLength(char str[]) 
{
    int i = 0;
    while (str[i] != '\0')       // Iterate until encounter with null terminator
    {
        i++;
    }
    return i;                    // Return number of characters
}
