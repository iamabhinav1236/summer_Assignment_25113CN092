// Write a program to Check palindrome string. 

// Approach Used- Compare characters from start and end moving towards the center if all match then the string is a palindrome
// Difficulty Level- Easy
// Concept Used- Use of functions, loops, if-else conditions and strings.

#include <stdio.h>
int isPalindrome(char str[]);

int main() 
{
    char str[100];               // Initialize string
    
    printf("Enter a string: ");
    scanf("%s", str);            // Input string (without spaces)
    
    if (isPalindrome(str)) 
    {
        printf("The string is a palindrome.\n");
    } 
    else 
    {
        printf("The string is not a palindrome.\n");
    }

    return 0;
}

int isPalindrome(char str[])                // Function Definition
{
    int i = 0, j;
    int length = 0;
    
    while (str[length] != '\0')             // Finding length 
    {
        length++;
    }
    
    j = length - 1;               // Last index
    
    while (i < j) 
    {
        if (str[i] != str[j])     // Compare characters from both ends
        {
            return 0;             // Not a palindrome
        }
        i++;
        j--;
    }
    return 1;                     // Palindrome
}
