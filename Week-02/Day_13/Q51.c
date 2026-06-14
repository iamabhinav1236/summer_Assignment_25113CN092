// Write a program to Find largest and smallest element. 


// Approach Used- Taking input from User then using the function(large) and finding the Max & Min.
// Difficulty Level- Easy
// Concept Used- Use of Array, Functions and for loop

#include <stdio.h>
void large(int arr[], int size);                    // Function Declaration

int main() 
{
    int n, i;                   // Initialize variables
    
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    
    int arr[n];                     // Initialize array size 
    
    printf("Enter the %d elements:\n", n);

    for (i = 0; i < n; i++)                         // for loop for taking input of numbers for Array
    {
        scanf("%d", &arr[i]);
    }
    
    
    large(arr, n);                      // Passing the actual array 'arr' and its size 'n' to the function
    
    return 0;
}

void large(int arr[], int size) {
    
    int max_val = arr[0];                       // Initialize max and min with the first element
    int min_val = arr[0];
     
    for (int i = 1; i < size; i++) 
    {
        if (arr[i] > max_val) 
        {
            max_val = arr[i];
        }
        if (arr[i] < min_val) 
        {
            min_val = arr[i];
        }
    }
    
    printf("Largest Element: %d\n", max_val);
    printf("Smallest Element: %d\n", min_val);
}

