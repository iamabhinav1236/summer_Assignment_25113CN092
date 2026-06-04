// Write a program to Print Armstrong numbers in a range. 

// Approach Used- An Armstrong number is a number that is equal to the sum of its own digits each raised to the power of the number of digits.
// Difficulty Level- Medium (Lerned the concept of Armstrong numbers and how to implement it using loops and conditions)      
// Concept Used- Using the concept of loops to calculate the sum of the digits raised to the power of the number of digits and conditions to check if it is an Armstrong number.    

#include <stdio.h>
#include <math.h>   

int isArmstrong(int n);          // Function declaration

int main() 
{
    int begin, end;    
    printf("Enter the range (begin and end): ");
    scanf("%d %d", &begin, &end);

    printf("Armstrong numbers in the range %d to %d are: ", begin, end);
    for (int i = begin; i <= end; i++)          // Loop for range from begin to end
    {
        if (isArmstrong(i))         // Check if the number is an Armstrong number using the isArmstrong function
        {
            printf("%d ", i);
        }
    }
    printf("\n");
    return 0;

}

int isArmstrong(int n)                // Function definition 
    {
    int originalNum = n, sum = 0, digits = 0;
     
    while (originalNum != 0)            // Calculate the number of digits in the number
    {
        originalNum /= 10;               // Remove the last digit by dividing the number by 10
        digits = digits + 1;                          // Increment the digit count
    }
    
    originalNum = n;               // Reset originalNum to the input number for the next function
    
   
    while (originalNum != 0)             // Function to find the sum of the digits raised to the power of the number of digits
    {
        int digit = originalNum % 10;     // Get the last digit
        sum += pow(digit, digits);        // Add the digit raised to the power of digits to the sum by using the pow function from math.h library function
        originalNum /= 10;                // Remove the last digit
    }
    
    return sum == n;        
}