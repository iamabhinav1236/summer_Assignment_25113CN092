// Write a program to Count set bits in a number. 

// Approach Used- The count of set bits in a number is calculated by calculating the no. of 1s in the binary representation of the number.
// Difficulty Level- Hard (Requires revision and more understanding of bitwise operations)
// Concept Used- Using the concept of loops and if-else conditions.

#include <stdio.h>
int Count(int n);          // Function declaration

int main() 
{
    int num;    
    printf("Enter a number: ");
    scanf("%d", &num);

    int count = Count(num);          // Function call
    printf("The number of set bits in %d is: %d\n", num, count);
    
    return 0;
}

int Count(int n)          // Function definition
{
    int count = 0;                   // Variable to keep track of the count of set bits
    
    while (n > 0) 
    {
        if (n & 1) {                 // Check if the least significant bit is set (1)
            count++;                  // Increment the count if it is a set bit
        }
        n >>= 1;                     // Right-shift the number to check the next bit
    }
    
    return count;                   // Return the final count of set bits
}




