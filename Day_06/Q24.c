// Write a program to Find x^n without pow(). 

// Approach Used- The value of x^n is calculated by initializing a result (variable) to 1 and then multiplying it by x in a loop that runs n times. 
//                This results in x multiplied by itself n times.
// Difficulty Level- Easy
// Concept Used- Using the for loop, large data types and function 

#include<stdio.h>
long long Power(double x, int n);          // Function declaration

int main() 
{
    double x;    
    int n;
    
    printf("Enter the base (x): ");
    scanf("%lf", &x);
    
    printf("Enter the exponent (n): ");
    scanf("%d", &n);

    long long result = Power(x, n);           // Function call
    printf("%lf raised to the power of %d is: %lld\n", x, n, result);
    
    return 0;
}

long long Power(double x, int n)          // Function definition
{
    long long result = 1;                   // Initialize result to 1
    
    for (int i = 0; i < n; i++)             // Loop n times to multiply result by x
    {
        result *= x;                      // Multiply result by x in each iteration
    }
    
    return result;                       // Return  x^n
}






