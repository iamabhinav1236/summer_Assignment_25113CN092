// Write a program to Print factors of a number. 

// Approach Used- A factor of a number is an integer that divides the number without leaving a remainder.
// Difficulty Level- Easy
// Concept Used- Using the concept of loops &if-else conditions to check if they are factors of the given number or not.

#include <stdio.h>

int main() 
{
    int num;    
    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Factors of %d are: ", num);
    for (int i = 1; i <= num; i++)          // Loop from 1 to num to find factors
    {
        if (num % i == 0)               // Check if i is a factor of num by checking if the remainder is 0
        {
            printf("%d ", i);           // If it is a factor, print it
        }
    }
    printf("\n");
    return 0;
}


