// Write a program to Reverse a string. 

// Approach Used- Swap characters from both sides (start and end) and move towards the center until the string is reversed
// Difficulty Level- Easy
// Concept Used- Use of functions, loops, strings and string.h library.

#include <stdio.h>
#include <string.h>
void reverseString(char str[]);             // Function Declaration

int main() 
{
    char str[100];               // Initialize string
    
    printf("Enter a string: ");
    scanf("%s", str);                    // Input string (without spaces)
    
    reverseString(str);                 // Calling function to reverse string
    
    printf("Reversed string = %s\n", str);

    return 0;
}

void reverseString(char str[]) 
{
    int i, j;
    char temp;
    int length = 0;
    
    while (str[length] != '\0')                     // Find length manually
    {
        length++;
    }
    
    for (i = 0, j = length - 1; i < j; i++, j--) 
    {
        temp = str[i];                              // Swap characters
        str[i] = str[j];
        str[j] = temp;
    }
}
