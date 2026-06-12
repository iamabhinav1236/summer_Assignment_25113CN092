// Write a program to Write function for perfect number. 
// ALREADY DONE (Q.No.-17)


// Approach Used- A perfect number is a positive integer that is equal to the sum of its proper divisors, excluding itself.
// Difficulty Level- Medium (Learned the concept of perfect numbers)
// Concept Used- Using the concept of loops to calculate the sum of proper divisors and using if-else conditions.  


#include <stdio.h>

int Perfect(int n);          // Function declaration

int main() 
{
    int num;    
    printf("Enter a number: ");
    scanf("%d", &num);

    if (Perfect(num))         // Check if the number is a perfect number using the Perfect function
    {
        printf("%d is a perfect number.\n", num);
    } 
    else 
    {
        printf("%d is not a perfect number.\n", num);
    }
    
    return 0;
}

int Perfect(int n)              // Function definition
{
    int sum = 0;
    for (int i = 1; i < n; i++) 
    {
        if (n % i == 0)               // Checking i is a proper divisor of n
        {
            sum = sum + i;             // Adding the proper divisor to the sum
        }
    }
    return sum == n;                    // Check sum of proper divisors is equal to original number n
}





