// Write a program to Remove duplicates from array. 

// Approach Used- Using loops to find duplicates and shift elements to left
// Difficulty Level- Hard
// Concept Used- Nested Loops and Array

#include <stdio.h>
int remove(int arr[], int size);              // Function Declaration

int main() 
{
    int arr[] = {10, 20, 10, 30, 20, 40, 10};
    int size = sizeof(arr) / sizeof(arr[0]);
    
    printf("Original array:\n");

    for (int i = 0; i < size; i++) 
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    size = remove(arr, size);               // Function Call
    
    printf("Array after removing duplicates:\n");

    for (int i = 0; i < size; i++) 
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    return 0;
}

int remove(int arr[], int size) 
{
    if (size == 0 || size == 1) 
    {
        return size;
    }
    
    for (int i = 0; i < size; i++)                  // Outer loop to select each element
    {
        for (int j = i + 1; j < size; j++)                      // Inner loop to find duplicates of the selected element
        {
            if (arr[i] == arr[j]) 
            {
                for (int k = j; k < size - 1; k++)                      // Shift elements to the left
                {
                    arr[k] = arr[k + 1];
                }
                size--;                     // Decrease array size as an element is removed
                j--;    
            }
        }
    }
    return size;
}
