// Write a program to Check whether a number is palindrome.

//Approach Used- For negative numbers, return 0. For non-negative numbers, reverse the number and compare it with the original number. If they are the same, it's a palindrome; otherwise, it's not.
//Difficulty Level- Medium
//Concept Used- Make a finction to reverse the number and compare it with the original number.

#include <stdio.h>
int isPalindrome(int n);

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

int isPalindrome(int n)
{
    if (n < 0) return 0;            // For negative numbers 

    int original = n;
    int reversed = 0;

    while (n != 0) 
    {
        int digit = n % 10;            // Extract last digit
        reversed = reversed * 10 + digit; // Build reversed number
        n /= 10;                       // Remove last digit
    }

    return original == reversed;            // If original and reversed are equal, it's a palindrome
}

