// Write a program to Find common characters in strings. 

// Approach Used- Iterate over both strings, count frequency of characters, and print characters that appear in both
// Difficulty Level- Medium
// Concept Used- Use of functions, loops, if-else conditions, strings and arrays.

#include <stdio.h>

void findCommonChars(char str1[], char str2[]);

int main() 
{
    char str1[100], str2[100];                             // Initialize strings
    
    printf("Enter first string: ");
    scanf("%s", str1);
    
    printf("Enter second string: ");
    scanf("%s", str2);
    
    printf("Common characters: ");
    findCommonChars(str1, str2);                            // Calling function
    
    return 0;
}

void findCommonChars(char str1[], char str2[]) 
{
    int freq1[256] = {0};                           // Frequency array for str1
    int freq2[256] = {0};                           // Frequency array for str2
    int i;
    
    for (i = 0; str1[i] != '\0'; i++)                            // Count frequency of characters in str1
    {
        freq1[(unsigned char)str1[i]] = 1; 
    }
    

    for (i = 0; str2[i] != '\0'; i++)                            // Count frequency of characters in str2
    {
        freq2[(unsigned char)str2[i]] = 1;
    }
    
    for (i = 0; i < 256; i++)                           // Printing common characters
    {
        if (freq1[i] == 1 && freq2[i] == 1) 
        {
            printf("%c ", i);
        }
    }
    printf("\n");
}
