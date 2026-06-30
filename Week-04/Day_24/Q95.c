// Write a program to Find longest word. 

// Approach Used- Iterate the sentence character by character, extract words separated by spaces, and track the longest word found
// Difficulty Level- Medium
// Concept Used- Use of functions, loops, if-else conditions, strings and arrays.

#include <stdio.h>
#include <string.h>

void findLongestWord(char str[]);                     // Function Declaration

int main() 
{
    char str[200];               // Initialize string
    
    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);                  // Input sentence (with spaces)
    
    findLongestWord(str);                     // Calling function
    
    return 0;
}

void findLongestWord(char str[])                      // Function Definition
{
    int i = 0, start = 0, length = 0;
    int maxLen = 0, maxStart = 0;
    
    while (str[i] != '\0') 
    {
        if (str[i] != ' ' && str[i] != '\n') 
        {
            if (length == 0) 
                start = i;            // start of a word
            length++;
        } 
        else 
        {
            if (length > maxLen)      // Update longest word
            {
                maxLen = length;
                maxStart = start;
            }
            length = 0;               // Reset for next word
        }
        i++;
    }
    
    printf("Longest word = ");                      // Printing longest word

    for (i = 0; i < maxLen; i++) 
    {
        printf("%c", str[maxStart + i]);
    }
    
    printf("\nLength = %d\n", maxLen);
}
