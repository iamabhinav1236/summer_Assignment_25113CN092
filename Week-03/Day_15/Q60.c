// Write a program to Move zeroes to end. 

// Approach Used- using the function to shift all the non-zero elements to the front and the filling the remaining of the space with zeroes
// Difficulty Level- More than Medium 
// Concept Used- Use of loops, functions and Arrays

#include <stdio.h>
void move(int arr[], int size);                     // Function Declaration

int main() 
{
    int n,i;                // Initialize variables
    
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    
    int arr[n];             // Initalize size of array
  
    printf("Enter the elements:\n" , n);

    for (i = 0; i < n; i++)                 // for loop for taking input of numbers for Array
    {
        scanf("%d", &arr[i]);
    }

    int size = sizeof(arr) / sizeof(arr[0]);

    printf("Original array: ");

    for (int i = 0; i < size; i++) 
    {
        printf("%d ", arr[i]);
    }

    printf("\n");
    move(arr, size);                // Function Calling
    printf("Modified array: ");

    for (int i = 0; i < size; i++) 
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

void move(int arr[], int size)                  // Function Definition 
{
    int nonZeroIndex = 0;

    for (int i = 0; i < size; i++)                          // Shifting all non-zero elements to the front
    {
        if (arr[i] != 0) 
        {
            arr[nonZeroIndex] = arr[i];
            nonZeroIndex++;
        }
    }

    while (nonZeroIndex < size)                     // Filling the rest of the array with zeroes
    {
        arr[nonZeroIndex] = 0;
        nonZeroIndex++;
    }
}

