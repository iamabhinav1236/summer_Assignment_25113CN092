// Write a program to Find LCM of two numbers. 

// Approach Used- The LCM (Least Common Multiple) of two numbers can be found using the relationship between GCD (Greatest Common Divisor) and LCM, which is given by the formula: LCM(a, b) = (a * b) / GCD(a, b).
//                 We can implement this by first defining a function to calculate the GCD of two numbers using the Euclidean algorithm, 
//                 and then using that GCD to calculate the LCM.
// Difficulty Level- Easy (But taken help from AI and learnt the concept of LCM and GCD)
// Concept Used- Using the concept of recursive functions to find the LCM of two numbers.

#include <stdio.h>
int gcd(int a, int b);
int lcm(int a, int b);

int main() 
{
    int num1, num2;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    printf("LCM of %d and %d is %d", num1, num2, lcm(num1, num2));
    return 0;
}

int gcd(int a, int b) {
    if (b == 0) {
        return a;
    }
    return gcd(b, a % b);
}

int lcm(int a, int b) {
    return (a * b) / gcd(a, b);
}