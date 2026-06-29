//  Write a program to Find pair with given sum.

// Approach Used- Initilizing the variables and updating them when visited and skipping them by updating if already visited.
// Difficulty Level- Hard
// Concept Used- Use of if condition, for loop and Array

#include <stdio.h>
void findPair(int arr[], int size, int targetSum);                  // Function Declaration

int main() 
{
    int n,i,targetsum;                // Initialize variables
    
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    
    int arr[n];             // Initalize size of array
  
    printf("Enter the elements:\n" , n);

    for (i = 0; i < n; i++)                 // for loop for taking input of numbers for Array
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter the targeted sum for which pair required to find: ");
    scanf("%d", &targetsum);
    
    int size = sizeof(arr) / sizeof(arr[0]);                // Calculate the number of elements in the array

    printf("Array elements: ");

    for (int i = 0; i < size; i++) 
    {
        printf("%d ", arr[i]);
    }
    printf("\nTarget Sum: %d\n\n", targetsum);

    findPair(arr, size, targetsum);                         // Call the function to find the pair

    return 0;
}

void findPair(int arr[], int size, int targetSum)                   // Function Definition
{
    int found = 0;

    for (int i = 0; i < size - 1; i++)                   // Outer loop picks the first element of the pair
    {        
        for (int j = i + 1; j < size; j++)                      // Inner loop searches for the second element
        {
            if (arr[i] + arr[j] == targetSum)                    // Check if the sum of the two elements equals the target
            {
                printf("Pair found: %d and %d (at indices %d and %d)\n", arr[i], arr[j], i, j);
                found = 1;
            }
        }
    }

    if (!found)                 // If no pair found
    {
        printf("No pair found with the given sum %d.\n", targetSum);
    }
}
