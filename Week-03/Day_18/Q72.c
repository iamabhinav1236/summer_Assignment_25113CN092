// Write a program to Sort array in descending order. 

// Approach Used- It repeatedly compares pairs of elements and swaps them so that the largest values bubble up to the front, producing a descending order array.
// Difficulty Level- Easy
// Concept Used- Use of loops, if condition and arrays

#include <stdio.h>

int main() 
{
    int arr[100];
    int size, i, j, temp;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    printf("Enter %d elements:\n", size);               // Input array elements

    for (i = 0; i < size; i++) 
    {
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < size - 1; i++)                  // Sorting the array in descending order
    {
        for (j = i + 1; j < size; j++) 
        {
            
            if (arr[i] < arr[j])                // Change to '>' for ascending order
            { 
                temp = arr[i];                  // Swaping elements if current element is smaller than next element
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    
    printf("\nArray elements in descending order:\n");              // Print the sorted array

    for (i = 0; i < size; i++) 
    {
        printf("%d ", arr[i]);
    }

    printf("\n");

    return 0;
}
