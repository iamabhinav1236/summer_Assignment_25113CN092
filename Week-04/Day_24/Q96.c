// Write a program to Remove duplicate characters. 

// Approach Used- Iterate through the string, maintain a frequency array, and copy only the first occurrence of each character into the result
// Difficulty Level- Medium
// Concept Used- Use of functions, loops, if-else conditions, strings and arrays.

#include <stdio.h>

void removeDuplicates(char str[]);                      // Function Declaration

int main() 
{
    char str[200];               // Initialize string
    
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);                      // Input string (with spaces)
    
    removeDuplicates(str);                        // Calling function
    
    printf("String after removing duplicates = %s\n", str);

    return 0;
}

void removeDuplicates(char str[])                       // Function Definition
{
    int freq[256] = {0};                    // Frequency array for all ASCII characters
    int i = 0, j = 0;
    
    while (str[i] != '\0') 
    {
        if (str[i] != '\n')                  // Ignore newline from fgets
        {
            if (freq[(unsigned char)str[i]] == 0) 
            {
                freq[(unsigned char)str[i]] = 1;                    // character as seen
                str[j] = str[i];                       // Copy first occurrence
                j++;
            }
        }
        i++;
    }
    str[j] = '\0';                     // Null terminate the modified string
}
