// Write a program to Binary search. 

// Approach Used- This is a method that is performed on sorted elements only by dividing the search space into half continously
// Difficulty Level- Easy
// Concept Used- use of functions, loops, if-else conditions and arrays.

#include <stdio.h>
int binarySearch(int array[], int size, int target);

int main() 
{
    int n, i, j, temp, a;               // Initialize variables
    
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    
    int arr[n];             // Initalize size of array
  
    printf("Enter the elements:\n");

    for (i = 0; i < n; i++)                 // for loop for taking input of numbers for Array
    {
        scanf("%d", &arr[i]);
    }
    
    // Array must be sorted

    for (i = 0; i < n - 1; i++)                  // Sorting the array in descending order
    {
        for (j = i + 1; j < n; j++) 
        {
            if (arr[i] > arr[j])                // Change to '<' for descending order
            { 
                temp = arr[i];                  
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    int size = sizeof(arr) / sizeof(arr[0]);     
    
    printf("Enter the target: ");
    scanf("%d", &a);

    printf("Searching for %d in the array...\n", a);
    int result = binarySearch(arr, size, a);                   // Calling function

    if (result != -1) 
    {
        printf("Element found! %d is at index %d.\n", a, result);
    } 
    else 
    {
        printf("Element not found in the array.\n");
    }

    return 0;
}

int binarySearch(int array[], int size, int target)              // Function to perform binary search
{
    int low = 0;
    int high = size - 1;

    while (low <= high) 
    {
        int mid = low + (high - low) / 2;

        if (array[mid] == target)                    // Check if target is present at mid
        {
            return mid;
        }
        if (array[mid] < target)                    // If target is greater, ignore the left half
        {
            low = mid + 1;
        } 
        else                                 // If target is smaller, ignore the right half
        {
            high = mid - 1;
        }
    }
    return -1;           // Element was not present in the array
}
