// Write a program to Count vowels and consonants. 

// Approach Used- Count the characters until the null character get encountered and maintain two seperate varibles for count
// Difficulty Level- Easy
// Concept Used- Use of functions, loops, if-else conditions and strings.

#include <stdio.h>

int main() 
{
    char str[200];

    int vowels = 0, consonants = 0;             // Initilizing the variables

    printf("Enter a string: ");
    scanf("%s", str);

    for (int i = 0; str[i] != '\0'; i++) // Iterate through each character until the null terminator '\0' will be encountered
    {
        char ch = str[i];

        if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) 
        {
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') 
            {                       // Checking for both lowercase and uppercase vowels
                vowels++;
            }
            else                // If it is not a vowel, then it will be consonant again it can be both uppercase as lowercase
            {
                consonants++;
            }
        }

    }

    printf("Vowels: %d\n", vowels);                         // Display the final counts
    printf("Consonants: %d\n", consonants);

    return 0;
}
