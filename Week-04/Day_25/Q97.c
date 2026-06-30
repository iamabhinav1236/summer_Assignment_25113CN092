// Write a program to Merge two sorted arrays. 

// Approach Used- Iterate both arrays simultaneously, compare elements, and insert the smaller one into the result array until all elements are merged
// Difficulty Level- Medium (Leaarnt the way of thinking)
// Concept Used- Use of functions, loops, if-else conditions and arrays.

#include <stdio.h>

void mergeArrays(int arr1[], int n1, int arr2[], int n2, int result[]);                 // Function Declaration

int main() 
{
    int arr1[100], arr2[100], result[200];
    int n1, n2, i;
    
    printf("Enter size of first sorted array: ");
    scanf("%d", &n1);

    printf("Enter elements of first sorted array:\n");
    for (i = 0; i < n1; i++) 
    {
        scanf("%d", &arr1[i]);
    }
    
    printf("Enter size of second sorted array: ");
    scanf("%d", &n2);

    printf("Enter elements of second sorted array:\n");
    for (i = 0; i < n2; i++) 
    {
        scanf("%d", &arr2[i]);
    }
    
    mergeArrays(arr1, n1, arr2, n2, result);                          // Calling function
    
    printf("Merged sorted array:\n");
    for (i = 0; i < n1 + n2; i++) 
    {
        printf("%d ", result[i]);
    }
    printf("\n");
    
    return 0;
}

void mergeArrays(int arr1[], int n1, int arr2[], int n2, int result[])                      // Function Definition
{
    int i = 0, j = 0, k = 0;
    
    while (i < n1 && j < n2)                           // Merge until one array is exhausted
    {
        if (arr1[i] <= arr2[j]) 
        {
            result[k++] = arr1[i++];
        } 
        else 
        {
            result[k++] = arr2[j++];
        }
    }
    
    while (i < n1)                           // Copy remaining elements of arr1
    {
        result[k++] = arr1[i++];
    }
    
    while (j < n2)                          // Copy remaining elements of arr2
    {
        result[k++] = arr2[j++];
    }
}
