// Write a program to Print multiplication table of a given number. 

// Approach Used- Used a loop to iterate from 1 to 10 and print the product of the given number with the loop variable in each iteration. Finally, print the multiplication table.
// Difficulty Level- Easy
// Concept Used-  Use of loops and basic Knowledge of Numbers .

#include <stdio.h>

int main() 
{
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    printf("\nMultiplication Table of %d:\n", num);

    for (int i = 1; i <= 10; i++) 
    {
        printf("%d x %d = %d\n", num, i, num * i);
    }

    return 0;
}