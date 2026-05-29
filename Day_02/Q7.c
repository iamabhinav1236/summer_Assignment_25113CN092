// Write a program to Find product of digits.

#include <stdio.h>

long long productOfDigits(int n) {
   
    // Handle negative numbers
    if (n < 0) n = -n;

    // Special case: if number is 0
    if (n == 0) return 0;

    long long product = 1;
    while (n != 0) {
        int digit = n % 10;   // Extract last digit
        product *= digit;     // Multiply digit to product
        n /= 10;              // Remove last digit
    }
    return product;
}

int main() 
{
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Product of digits of %d = %lld\n", num, productOfDigits(num));

    return 0;
}