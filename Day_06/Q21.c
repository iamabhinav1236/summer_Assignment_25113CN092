// Write a program to Convert decimal to binary. 

// Approach Used- The decimal to binary conversion is done by dividing the decimal number by 2 and keeping track of the remainders. 
//                The binary representation is obtained by reading the remainders in reverse order.
// Difficulty Level- Medium (Requires understanding of the binary number system and how to convert it from decimal)
// Concept Used- Using the concept of for and while loops, if condition and functions.

#include <stdio.h>  
void Binary(int n);          // Function declaration

int main() 
{
    int num;    
    printf("Enter a decimal number: ");
    scanf("%d", &num);
    
    Binary(num);              // Function call
    printf("The binary conversion of %d is: ", num);
    
    return 0;
}

void Binary(int n)          // Function definition
{
    int binary[32];                   // Storing binary digits (assuming 32-bit integer)*******
    int x = 0;                    // x to keep track of the position in the binary array

    if (n == 0) 
    {
        printf("0");                   // If the input number is 0, its binary representation is also 0
        return;
    }

    while (n > 0) 
    {
        binary[x] = n % 2;         // Store the remainder in the array
        n = n / 2;                     // Update n by dividing it by 2
        x++;                       // Keep incrementing the position
    }

    
    for (int i = x - 1; i >= 0; i--)            // Print the binary digits in reverse order
    {
        printf("%d", binary[i]);       // Print each binary digit
    }
}