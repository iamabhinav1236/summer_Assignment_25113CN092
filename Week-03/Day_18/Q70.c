// Write a program to Selection sort. 

// Approach Used- Dividing an array into sorted and unsorted region, and repeatedly finding the minimum element from the unsorted part, and swapping it with the first element of that unsorted region
// Difficulty Level- Easy
// Concept Used- Use of functions, loops, and arrays

#include <stdio.h>

void swap(int *a, int *b);              // function declaration
void selectionSort(int arr[], int size);              // function declaration
void printArray(int arr[], int size);              // function declaration

int main() 
{
    int n,i;                // Initialize variables
    
    printf("Enter the size of the first array: ");
    scanf("%d", &n);
    
    int arr[n];             // Initalize size of array
  
    printf("Enter the elements:\n" , n);

    for (i = 0; i < n; i++)                 // for loop for taking input of numbers for Array
    {
        scanf("%d", &arr[i]);
    }

    int size = sizeof(arr) / sizeof(arr[0]);

    printf("Original array:\n");
    printArray(arr, size);

    selectionSort(arr, size);               // Calling the function

    printf("\nSorted array in ascending order:\n");
    printArray(arr, size);

    return 0;
}

void swap(int *a, int *b)                   // Function to swap two elements using pointers
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void selectionSort(int arr[], int size)                     // Function for Selection Sort
{
    for (int i = 0; i < size - 1; i++) 
    {
        int min = i;                // Assume the first unsorted element is the minimum

        for (int j = i + 1; j < size; j++)                  // Scan the remaining unsorted part to find the actual minimum
        {
            if (arr[j] < arr[min]) 
            {
                min = j;                    // Update index of the minimum element
            }
        }

        if (min != i)                   // Swap the found minimum element with the first unsorted element
        {
            swap(&arr[i], &arr[min]);
        }
    }
}

void printArray(int arr[], int size)                    // Function to print the array elements
{
    for (int i = 0; i < size; i++) 
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
