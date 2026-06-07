// Write a program to Recursive reverse number.

// Approach Used- The functions that calls itself with reduced values of n when we call for the recursive function.
// Difficulty Level- Medium
// Concept Used- Using recursion, if condition and functions.

#include<stdio.h>
int Reverse(int num, int reversed);          // Function declaration

int main() 
{
    int num; 
    int reversed = 0;                   // Variable to store the reversed number   
    printf("Enter a number: ");
    scanf("%d", &num);

    int result = Reverse(num, 0);                    // Function call
    printf("The reverse of %d is: %d\n", num, result);
    
    return 0;
}

int Reverse(int num, int reversed)              // Function definition
{
   
    if (num == 0)                       // if input is 0 then return reversed
    {
        return reversed;                  
    }
    
    int last_digit = num % 10;              // for last digit of the number
    reversed = (reversed * 10) + last_digit;                  
    
    return Reverse(num / 10, reversed);                 // Recursive call: remove last digit from num and pass the updated reversed number
}