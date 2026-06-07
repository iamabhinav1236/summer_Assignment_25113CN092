// Write a program to Calculate sum of first N natural numbers. 

// Approach Used- Used a loop to iterate from 1 to N and keep adding the numbers to a sum variable. Finally, print the sum.
// Difficulty Level- Easy
// Concept Used- Use of loops and basic Knowledge of Numbers .

#include<stdio.h>

int main()
{
    int n, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &n);
    
    for(int i = 1; i <= n; i++)
    {
        sum += i;
    }
    
    printf("Sum of first %d natural numbers is: %d\n", n, sum);
    
    return 0;
}