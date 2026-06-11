// Write a program to Write function to find maximum. 

// Approach Used : Function
// Difficulty : Easy
// Concept Used : Function (Writing a function to find the maximum of two numbers only)

#include <stdio.h>
int max(int a, int b);             // Function Declaration  

int main() 
{
    int num1, num2;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);            // Input from the user
            
    int result = max(num1, num2);            // Calling function 

    printf("The maximum of %d and %d is: %d\n", num1, num2, result);            // Print result
    return 0;
}

int max(int a, int b)             // Function Definition
{
    if (a==b)              // Check if a is equal to b
    {
        return a;           // Return a since they are equal
    }
    
    else if (a > b)              // Check if a is greater than b
    {
        return a;           // Return a if it is greater
    }
    else 
    {
        return b;           // Return b if it is greater or equal to a
    }
}