// Write a program to Union of arrays. 

// Approach Used- Union means combining the elements of two arrays without duplication
// Difficulty Level- Easy
// Concept Used- Use of loops, arrays and functions

#include <stdio.h>

int isDuplicate(int arr[], int size, int element);              // function declaration
int findUnion(int arr1[], int size1, int arr2[], int size2, int unionArr[]);            // function declaration

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

    int unionArr[size1 + size2]; 

    int unionSize = findUnion(arr1, size1, arr2, size2, unionArr);          // calling function

    printf("Array 1: ");
    for (int i = 0; i < size1; i++) 
    {
        printf("%d ", arr1[i]);
    }
  
    printf("\nArray 2: ");
    for (int i = 0; i < size2; i++) 
    {
        printf("%d ", arr2[i]);
    }

    printf("\nUnion of arrays: ");                   // Print the Union Array
    for (int i = 0; i < unionSize; i++) 
    {
        printf("%d ", unionArr[i]);
    }
    printf("\n");

    return 0;
}

int isDuplicate(int arr[], int size, int element)                   //Function To check if element is already in array
{
    for (int i = 0; i < size; i++) 
    {
        if (arr[i] == element) 
        {
            return 1;                   // if found a duplicate
        }
    }
    return 0;                   // Unique element
}


int findUnion(int arr1[], int size1, int arr2[], int size2, int unionArr[])         // Function to find the union of two arrays
{
    int k = 0;                  // Initilize k=0

    for (int i = 0; i < size1; i++)                     // Copying unique elements from the first array              
    {
        if (!isDuplicate(unionArr, k, arr1[i])) 
        {
            unionArr[k] = arr1[i];
            k++;
        }
    }

    
    for (int i = 0; i < size2; i++)                     // Copying unique elements from the second array
    {
        if (!isDuplicate(unionArr, k, arr2[i])) 
        {
            unionArr[k] = arr2[i];
            k++;
        }
    }

    return k;                       // Return the final size of the union array
}

