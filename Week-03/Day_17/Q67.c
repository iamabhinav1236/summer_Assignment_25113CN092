// Write a program to Intersection of arrays. 

// Approach Used- Intersection means combining the elements of two arrays that are common to both the arrays
// Difficulty Level- Easy
// Concept Used- Use of loops, arrays and functions

#include <stdio.h>

int isDuplicate(int element, int res[], int size);              // function declaration
int findIntersection(int arr1[], int size1, int arr2[], int size2, int result[]);              // function declaration

int main() 
{
    int n,i;                // Initialize variables
    
    printf("Enter the size of the first array: ");
    scanf("%d", &n);
    
    int arr1[n];             // Initalize size of array
  
    printf("Enter the elements:\n" , n);

    for (i = 0; i < n; i++)                 // for loop for taking input of numbers for Array
    {
        scanf("%d", &arr1[i]);
    }

    printf("Enter the size of the second array: ");
    scanf("%d", &n);
    
    int arr2[n];             // Initalize size of array
  
    printf("Enter the elements:\n" , n);

    for (i = 0; i < n; i++)                 // for loop for taking input of numbers for Array
    {
        scanf("%d", &arr2[i]);
    }
    
    int size1 = sizeof(arr1) / sizeof(arr1[0]);
    int size2 = sizeof(arr2) / sizeof(arr2[0]);
    
    int maxIntersectionSize = (size1 < size2) ? size1 : size2;
    int result[maxIntersectionSize];
    
    int intersectionSize = findIntersection(arr1, size1, arr2, size2, result);                  // function calling

    printf("Array 1: ");
    for(int i = 0; i < size1; i++) printf("%d ", arr1[i]);
    
    printf("\nArray 2: ");
    for(int i = 0; i < size2; i++) printf("%d ", arr2[i]);
    
    printf("\nIntersection: ");

    if (intersectionSize == 0)                  // when no element is common
    {
        printf("No common elements found.");
    } 
    else 
    {
        for (int i = 0; i < intersectionSize; i++) 
        {
            printf("%d ", result[i]);
        }
    }
    printf("\n");

    return 0;
}

int isDuplicate(int element, int res[], int size)               // function to check if element is already in result array
{
    for (int i = 0; i < size; i++) 
    {
        if (res[i] == element) 
        {
            return 1;               // Found duplicate
        }
    }
    return 0;                 // Unique element
}


int findIntersection(int arr1[], int size1, int arr2[], int size2, int result[])              // Function to find the intersection of two arrays
{
    int k = 0;               // Initilize k=0 
    
    for (int i = 0; i < size1; i++)                // Compare every element of the first array with the second array
    {
        for (int j = 0; j < size2; j++) 
        {
            if (arr1[i] == arr2[j]) 
            {
                if (!isDuplicate(arr1[i], result, k)) 
                {
                    result[k] = arr1[i];
                    k++;
                }
                break;               // Break from inner loop when match found
            }
        }
    }
    return k;                   // Return total number of intersected elements
}

