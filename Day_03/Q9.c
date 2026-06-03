// Write a program to Check whether a number is prime. 

// Approach Used- A number is prime if it is greater than 1 and has no divisors other than 1 and itself.
// Difficulty Level- Easy
// Concept Used- Using a while loop to check and repeatedly replace (a, b) with (b, a % b) until b = 0 and the remainder remains in a is the GCD.


#include <stdio.h>

int main() {
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }

    printf("GCD = %d\n", a);
    return 0;
}