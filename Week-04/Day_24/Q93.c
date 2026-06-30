// Write a program to Check string rotation. 

// Approach Used- A string s2 is a rotation of s1 if s2 is a substring of s1+s1 (concatenation of s1 with itself)
// Difficulty Level- Medium (Learnt the concept of concatenation)
// Concept Used- Use of functions, loops, if-else conditions, strings and arrays.

#include <stdio.h>
#include <string.h>

int isRotation(char str1[], char str2[]);                    // Function Declaration          

int main() 
{
    char str1[100], str2[100];                // Initialize strings
    
    printf("Enter first string: ");
    scanf("%s", str1);
    
    printf("Enter second string: ");
    scanf("%s", str2);
    
    if (isRotation(str1, str2)) 
    {
        printf("The strings are rotations of each other.\n");
    } 
    else 
    {
        printf("The strings are not rotations of each other.\n");
    }

    return 0;
}

int isRotation(char str1[], char str2[])                    // Function Definition
{
    if (strlen(str1) != strlen(str2))                   // Lengths must be equal
    {
        return 0;
    }
    
    char temp[200];                         // Concatenating str1 with itself
    strcpy(temp, str1);
    strcat(temp, str1);
    
    if (strstr(temp, str2) != NULL)                         // Check if str2 is a substring of temp
    {
        return 1;
    }
    return 0;
}
