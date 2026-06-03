// Write a program to Find GCD of two numbers. 

// Approach Used- The GCD (Greatest Common Divisor) of two numbers can be found using the Euclidean algorithm, which is based on the principle that the GCD of two numbers also divides their difference. The algorithm can be implemented recursively or iteratively. In this program, we will use a recursive approach to find the GCD of two numbers.
// Difficulty Level- Easy (But taken help from AI and learnt the concept of GCD and how to implement it using recursion)
// Concept Used- Using the concept of recursive functions to find the GCD of two numbers.

#include <stdio.h>
int gcd(int a, int b);

int main() 
{
    int num1, num2;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    printf("GCD of %d and %d is %d", num1, num2, gcd(num1, num2));
    return 0;
}

int gcd(int a, int b) {
    if (b == 0) 
    {
        return a;
    }
    return gcd(b, a % b);
}
