// Write a program to Reverse array. 

// Approach Used- Using the functions to swap the elements of a array
// Difficulty Level- Medium
// Concept Used- Use of loops, functions and Arrays

#include <stdio.h>
void reverse(int arr[], int size);                  // Function Declaration
void printA(int arr[], int size);                    // Function Declaration

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

    printf("Original Array: ");
    printA(arr, size);                      // Calling the function

    reverse(arr, size);                    // Calling the function 

    printf("Reversed Array: ");             // Printing the result
    printA(arr, size);

    return 0;
}


void reverse(int arr[], int size)                //Function Definition
{   int start = 0;
    int end = size - 1;
    int temp;

    while (start < end)                    // Swap elements from both ends moving towards the center
    {
        temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;

        start++;
        end--;
    }
}

void printA(int arr[], int size)                    // Function Definition
{
    for (int i = 0; i < size; i++)                      // for loop for printing the Array
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}


