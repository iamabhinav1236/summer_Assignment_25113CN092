// Write a program to Reverse a number. 

#include <stdio.h>

long long reverseNumber(int n) {
    
    // Handle negative numbers
    int isNegative = 0;
    if (n < 0) {
        isNegative = 1;
        n = -n;
    }

    long long reversed = 0;
    while (n != 0) {
        int digit = n % 10;       // Extract last digit
        reversed = reversed * 10 + digit;      // Append digit to reversed
        n /= 10;                  // Remove last digit
    }

    return isNegative ? -reversed : reversed;    // Return negative if original number was negative
}

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Reverse of %d = %lld\n", num, reverseNumber(num));

    return 0;
}
