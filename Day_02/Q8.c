// Write a program to Check whether a number is palindrome.

#include <stdio.h>

int isPalindrome(int n) 
{
    // Handle negative numbers (negatives are never palindromes)
    if (n < 0) return 0;

    int original = n;
    int reversed = 0;

    while (n != 0) {
        int digit = n % 10;            // Extract last digit
        reversed = reversed * 10 + digit; // Build reversed number
        n /= 10;                       // Remove last digit
    }

    // If original and reversed are equal, it's a palindrome
    return original == reversed;
}

int main() 
{
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (isPalindrome(num))
        printf("%d is a Palindrome\n", num);
    else
        printf("%d is NOT a Palindrome\n", num);

    return 0;
}