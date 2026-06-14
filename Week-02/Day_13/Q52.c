// Write a program to Count even and odd elements. 

// Approach Used- Taking input from User then using the function(large) and finding the Max & Min.
// Difficulty Level- Easy
// Concept Used- Use of Array, Functions and for loop

#include <stdio.h>

int main() 
{
    int n,i;                  // Initialize variables

    printf("Enter the size of the array: ");
    scanf("%d", &n);
    
    int arr[n];                      // Initalize size of array
  
    printf("Enter the elements:\n" , n);

    for (i = 0; i < n; i++)                     // for loop for taking input of numbers for Array
    {
        scanf("%d", &arr[i]);
    }
    
    int size = sizeof(arr) / sizeof(arr[0]);
    int even_count = 0, odd_count = 0;                  // initalize the even and odd variables

    for (int i = 0; i < size; i++) 
    {
        if (arr[i] % 2 == 0)                // Checking for even divisibility
        {
            even_count++;
        } 
        else 
        {
            odd_count++;
        }
    }

    printf("Even Elements: %d\n", even_count);
    printf("Odd Elements: %d\n", odd_count);

    return 0;

}

