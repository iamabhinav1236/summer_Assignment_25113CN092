// Write a program to Bubble sort. 

// Approach Used- Comparing adjacent elements, and swaps them if they are in the wrong order
// Difficulty Level- Easy
// Concept Used- Use of functions, loops, and arrays

#include <stdio.h>

void bubbleSort(int arr[], int n);              // function declaration
void printArray(int arr[], int size);              // function declaration

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

    printf("Original array: \n");
    printArray(arr, n);

    bubbleSort(arr, n);                 // Calling Function

    printf("Sorted array in ascending order: \n");
    printArray(arr, n);

    return 0;
}

void bubbleSort(int arr[], int n)                   // Function for Bubble Sort
{
    int i, j, temp;
    int swapped;

    for (i = 0; i < n - 1; i++) 
    {
        swapped = 0; 

        for (j = 0; j < n - i - 1; j++)                 //Last i elements are already in place
        {
                if (arr[j] > arr[j + 1])                // Swap adjacent elements
                {  
                    temp = arr[j];
                    arr[j] = arr[j + 1];
                    arr[j + 1] = temp;
                
                swapped = 1; // Mark that a swap occurred
            }
        }

        
        if (swapped == 0)                   // If no two elements were swapped in the inner loop, the array is sorted
        {
            break;
        }
    }
}


void printArray(int arr[], int size)                // Function to print the array elements
{
    for (int i = 0; i < size; i++) 
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
