// Write a program to Find sum of digits of a number. 

#include <stdio.h>

// Function to calculate the sum of digits of a number

int sumOfDigits(int n) 
{
    // Handle negative numbers
    if (n < 0) n = -n;

    int sum = 0;
    while (n != 0) {
        sum += n % 10;  // Extract last digit and add to sum
        n /= 10;        // Remove last digit
    }
    return sum;
}

int main() 
{
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Sum of digits of %d = %d\n", num, sumOfDigits(num));

    return 0;
}

