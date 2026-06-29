// Write a program to Count words in a sentence. 

// Approach Used- Iterate through the characters until the null character get encountered, and count words by detecting spaces, tabs and new line between them.
// Difficulty Level- Easy
// Concept Used- Use of functions, loops, if-else conditions, strings and use of fgets function.

#include <stdio.h>
int countWords(char str[]);                     // Function Declaration

int main() 
{
    char str[200];               // Initialize string
    
    printf("Enter a sentence: ");

    fgets(str, sizeof(str), stdin);                  // Input sentence (with spaces)
    
    int words = countWords(str);                // Calling function to count words
    
    printf("Number of words = %d\n", words);

    return 0;
}

int countWords(char str[])              // Function Definition
{
    int i = 0, words = 0;
    int Word = 0;                     // Flag to track if inside a word
    
    while (str[i] != '\0') 
    {
        if (str[i] != ' ' && str[i] != '\n' && str[i] != '\t') 
        {
            if (Word == 0) 
            {
                words++;                // New word starts
                Word = 1;
            }
        } 
        else 
        {
            Word = 0;                 // End of a word
        }
        i++;
    }
    return words;
}
