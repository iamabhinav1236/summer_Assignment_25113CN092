// Write a program to Check anagram strings. 

// Approach Used- Two strings are anagrams if they have the same length and identical character frequencies; compare frequency counts of all characters
// Difficulty Level- Medium (Learnt the concept of Anagrams)
// Concept Used- use of functions, loops, if-else conditions and arrays.

#include <stdio.h>
int areAnagrams(char str1[], char str2[]);                 // Function Declaration

int main() 
{
    char str1[100], str2[100];                // Initialize strings
    
    printf("Enter first string: ");
    scanf("%s", str1);
    
    printf("Enter second string: ");
    scanf("%s", str2);
    
    if (areAnagrams(str1, str2))                    // Calling Function
    {
        printf("The strings are anagrams.\n");
    } 
    else 
    {
        printf("The strings are not anagrams.\n");
    }

    return 0;
}

int areAnagrams(char str1[], char str2[])                  // Function Definition
{
    int freq1[256] = {0};            // Frequency array for str1
    int freq2[256] = {0};            // Frequency array for str2

    int i = 0;
    

    while (str1[i] != '\0')                         // Count frequency of characters in str1
    {
        freq1[(unsigned char)str1[i]]++;
        i++;
    }
    
    i = 0;

    while (str2[i] != '\0')                         // Count frequency of characters in str2
    {
        freq2[(unsigned char)str2[i]]++;
        i++;
    }
    

    for (i = 0; i < 256; i++)                               // Compare frequency arrays
    {
        if (freq1[i] != freq2[i]) 
        {
            return 0;                // Not anagrams
        }
    }
    return 1;                        // Anagrams
}
