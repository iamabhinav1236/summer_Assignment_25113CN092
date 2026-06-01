// Write a program to Find product of digits.

// Approach Used- Created a function to find the product of digits by extracting each digit and multiplying them by iteration.
// Difficulty Level- Medium
// Concept Used- Use of Functions and Use of while loop

#include <stdio.h>
long long productOfDigits(int n);

int main() 
{
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Product of digits of %d = %lld\n", num, productOfDigits(num));

    return 0;
}

long long productOfDigits(int n) {     // For handling large products, we use long long
      
    if (n < 0) n = -n;           // Handle negative numbers
    
    if (n == 0) return 0;          // Special case: if number is 0, product of digits is 0

    long long product = 1;

    while (n != 0) 
    {
        int digit = n % 10;   // Extract last digit
        product *= digit;     // Multiply digit to product
        n /= 10;              // Remove last digit
    }

    return product;
}
