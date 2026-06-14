// Write a program to Linear search. 

// Approach Used- Linear Search
// Difficulty Level- Easy (Learnt the concept of linear search)
// Concept Used- Use of functions, for loop and array

#include <stdio.h>
int linear(int arr[], int size, int target);

int main() 
{
    int n,i,target;                  // Initalizing Variables

    printf("Enter the size of the array: ");
    scanf("%d", &n);
    
    int arr[n];                  // Initalize size of array
  
    printf("Enter the elements:\n" , n);

    for (i = 0; i < n; i++)                     // for loop for taking input of numbers for Array
    {
        scanf("%d", &arr[i]);
    }
    
    printf("Enter the number to search for: ");
    scanf("%d", &target);

    int result = linear(arr, n, target);                    // Calling function

    if (result != -1) 
    {
        printf("Element %d found at index %d (position %d):", target, result, result+1);
    } 
    else 
    {
       printf("Element %d is not present in the array. \n", target);
    }
    return 0;
}

int linearSearch(int arr[], int size, int target) 
{
    //Traverse the array from index 0 to size-1
    for (int i = 0; i < size; i++) 
    {
        if (arr[i] == target) 
        {
            return i;
        }
    }
    return -1;
}
