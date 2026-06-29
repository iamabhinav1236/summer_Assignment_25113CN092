// Write a program to Convert lowercase to uppercase. 

// Approach Used- Iterate through the characters until the null character get encountered, if a character is lowercase convert it to uppercase using ASCII difference.(Key Concept)
// Difficulty Level- Easy (Learnt the key concept of ASCII difference for conversion)
// Concept Used- Use of functions, loops, if-else conditions, arrays and strings.

#include <stdio.h>
void toUpperCase(char str[]);

int main() 
{
    char str[100];                   // Initialize string
    
    printf("Enter a string: ");
    scanf("%s", str);                    // Input string (without spaces)
    
    toUpperCase(str);                 // Calling function to convert
    
    printf("Uppercase string = %s\n", str);

    return 0;
}

void toUpperCase(char str[]) 
{
    int i = 0;
    while (str[i] != '\0') 
    {
        if (str[i] >= 'a' && str[i] <= 'z')                   // Check if character is lowercase
        {
            str[i] = str[i] - ('a' - 'A');                    // Convert to uppercase using ASCII difference
        }
        i++;                // Increment the variable
    }
}

 