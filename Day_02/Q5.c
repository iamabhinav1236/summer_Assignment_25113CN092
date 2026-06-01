// Write a program to Find sum of digits of a number. 

// Approach Used- Created a function which converts negative to positive and then find the sum of digits of a number if the given no. is negative.
//                And for Positive no. it will directly find the sum of digits of a number. 
// Difficulty Level- Easy
// Concept Used- Use of Functions and Use of while loop 

#include <stdio.h>
int main() 
{
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Sum of digits of %d = %d\n", num, sumOfDigits(num));

    return 0;
}

// Function to calculate the sum of digits of a number

int sumOfDigits(int n) 
{
    // Handle negative numbers
    if (n < 0) n = -n;

    int sum = 0;
    while (n != 0) 
    {
        sum += n % 10;  // Extract last digit and add to sum
        n /= 10;        // Remove last digit
    }
    return sum;
}



