// Write a program to Find maximum occurring character. 

// Approach Used- Count frequency of each character using an array indexed by ASCII values, then find the character with the highest frequency
// Difficulty Level- Medium
// Concept Used- Use of functions, loops, if-else conditions and arrays.

#include <stdio.h>

char maxOccurringChar(char str[]);

int main() 
{
    char str[200];               // Initialize string
    
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);   // Input string (with spaces)
    
    char result = maxOccurringChar(str);   // Calling function
    
    if (result != '\0') 
    {
        printf("Maximum occurring character = '%c'\n", result);
    } 
    else 
    {
        printf("No valid character found.\n");
    }

    return 0;
}

char maxOccurringChar(char str[]) 
{
    int freq[256] = {0};              // Frequency array for all ASCII characters
    int i = 0, maxFreq = 0;
    char maxChar = '\0';
    

    while (str[i] != '\0')                  // Count frequency of each character
    {
        if (str[i] != '\n')
        {
            freq[(unsigned char)str[i]]++;
        }
        i++;
    }
    
    for (i = 0; i < 256; i++)                       // Finding character with maximum frequency
    {
        if (freq[i] > maxFreq) 
        {
            maxFreq = freq[i];
            maxChar = (char)i;
        }
    }
    return maxChar;
}
