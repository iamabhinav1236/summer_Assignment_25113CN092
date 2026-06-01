// Write a program to Reverse a number. 

//Approach Used- Created a function to reverse a number by extracting each digit and building the reversed number.
// Difficulty Level- Easy
// Concept Used- Use of Functions and Use of while loop

#include <stdio.h>

int main() 
{
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Reverse of %d = %lld\n", num, reverseNumber(num));

    return 0;
}


long long reverseNumber(int n) {   // For handling large reversed numbers, we use long long
    
    int isNegative = 0;             // Handle negative numbers
    if (n < 0) 
    {
        isNegative = 1;
        n = -n;
    }

    long long reversed = 0;
    while (n != 0)
    {
        int digit = n % 10;       // Extract last digit
        reversed = reversed * 10 + digit;      // Append digit to reversed
        n /= 10;                  // Remove last digit
    }

    // Return negative if original number was negative 
    
    return isNegative ? -reversed : reversed;       // use of ternary operator for returning the final reversed number.
   
}
