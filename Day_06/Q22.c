// Write a program to Convert binary to decimal. 

// Approach Used- The binary to decimal conversion is done by iterating through each bit of the binary number, starting from the least significant bit (rightmost bit).
//                For each bit,  we add the value of 2 raised to the power of the position of that bit.
// Difficulty Level- Medium (Requires understanding of the binary number system and how to convert it to decimal)
// Concept Used- Using the concept of functions and while loop.

#include <stdio.h>
int Decimal(int binary);          // Function declaration

int main() 
{
    int binary;    
    printf("Enter a binary number: ");
    scanf("%d", &binary);

    int decimal = Decimal(binary);          // Function call
    printf("The decimal conversion of %d is: %d\n", binary, decimal);
    
    return 0;
}

int Decimal(int binary)          // Function definition
{
    int decimal = 0;                   // Variable to store the decimal
    int b = 1;                      // Base value for the current bit (2^0 = 1)
    
    while (binary > 0) 
    {
        int last = binary % 10;   // Get the last digit of binary number
        
        if (last == 1) 
        {
            decimal += b;            // If the last digit is 1, add the current base value to the decimal result
        }
        
        binary /= 10;                  // Remove the last digit from the binary number
        b *= 2;                     // Update the base value for the next bit
    }
    
    return decimal;                   // Return the final decimal result
}



