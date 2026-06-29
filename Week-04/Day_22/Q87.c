// Write a program to Find character frequency. 

// Approach Used- Iterate the string and count how many times each character appears using an array indexed by ASCII values
// Difficulty Level- Medium(Learnt this code from Google)
// Concept Used- Use of functions, loops, if-else conditions and strings.

#include <stdio.h>

void characterFrequency(char str[]);                 // Function Declaration

int main() 
{
    char str[200];               // Initialize string
    
    printf("Enter a string: ");
    
    fgets(str, sizeof(str), stdin);   // Input string (with spaces)
    
    characterFrequency(str);          // Calling function to find frequency
    
    return 0;
}

void characterFrequency(char str[])                 // Function Definition
{
    int freq[256] = {0};              // Frequency array for all ASCII characters
    int i = 0;
    
    while (str[i] != '\0') 
    {
        freq[(unsigned char)str[i]]++;              // Increment frequency of character
        i++;
    }
    
    printf("Character frequencies:\n");
    for (i = 0; i < 256; i++) 
    {
        if (freq[i] > 0 && i != '\n')                  // Print only characters that appear (ignore newline)
        {
            printf("'%c' = %d\n", i, freq[i]);
        }
    }
}
