// Write a program to Recursive sum of digits. 

// Approach Used- The functions that calls itself with reduced values of n when we call for the recursive function.
// Difficulty Level- Easy
// Concept Used- Using recursion and functions.


#include<stdio.h>
long long Sum(int n);          // Function declaration

int main() 
{
    int num;    
    printf("Enter a number: ");
    scanf("%d", &num);

    int result = Sum(num);           // Function call
    printf("The sum of digits of %d is: %d\n", num, result);
    
    return 0;
}

long long Sum(int n)          // Function definition
{
    if (n < 0) 
    {
        n = -n;                          // Convert negative to positive 
        printf("Ignoring negative sign.\n");                
        return ((n % 10) + Sum(n / 10));                  // Recursive call: add last digit to sum of remaining digits
    } 
    else if (n == 0) 
    {
        return 0;                   // Base case: sum of digits of 0 is 0
    } 
    else 
    {
        return (n % 10) + Sum(n / 10);              // Recursive call: add last digit to sum of remaining digits
    }
}
