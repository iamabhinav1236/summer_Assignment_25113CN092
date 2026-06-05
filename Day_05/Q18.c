// Write a program to Check strong number. 

// Approach Used- A strong number is a number whose sum of the factorial of its digits is equal to the original number.
// Difficulty Level- Medium (Learned the concept of strong numbers and how to implement it using loops and conditions)
// Concept Used- Using the concept of loops to calculate the sum of the factorial of the digits and conditions to check if it is a strong number.

#include <stdio.h>

int Strong(int n);          // Function declaration

int main() 
{
    int num;    
    printf("Enter a number: ");
    scanf("%d", &num);

    if (Strong(num))         // Check if the number is a strong number using the isStrong function
    {
        printf("%d is a strong number.\n", num);
    } 
    else 
    {
        printf("%d is not a strong number.\n", num);
    }
    
    return 0;
}

int Strong(int n)              // Function definition
{
    int originalNum = n, sum = 0;
    
    while (originalNum != 0)             // Function to find the sum of the factorial of the digits
    {
        int digit = originalNum % 10;              // Get the last digit
        int factorial = 1;
        
        for (int i = 1; i <= digit; i++)             // Calculate the factorial of the digit
        {
            factorial *= i;
        }
        
        sum = sum + factorial;                 // Add the factorial to the sum
        originalNum = originalNum / 10;            // Remove the last digit
    }
    
    return sum == n;                    // Check if sum of factorial of digits is equal to original number n
}