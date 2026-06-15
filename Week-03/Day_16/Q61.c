// Write a program to Find missing number in array. 
 
// Approach Used- Use of Bitwise XOR Operator
// Difficulty Level- Hard
// Concept Used- Use of loops, functions, Bitwise XOR Operator and Arrays

#include <stdio.h>
int find(int arr[], int size);


int main() {
    
    int n,i;                // Initialize variables
    
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    
    int arr[n];             // Initalize size of array
  
    printf("Enter the elements:\n" , n);

    for (i = 0; i < n; i++)                 // for loop for taking input of numbers for Array
    {
        scanf("%d", &arr[i]);
    }
   
    int size = sizeof(arr) / sizeof(arr[0]);

    int missingNumber = find(arr, size);

    printf("The given array is: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    
    printf("\nThe missing number is: %d\n", missingNumber);

    return 0;
}


int find(int arr[], int size)                   // Function to find the missing number using Bitwise XOR
{
    int c,d;
    int a = 0;
    int b = 0;
    int N = size + 1;                           // Expected total number of elements

    for (int i = 1; i <= N; i++) 
    {
        c ^= i;
    }

    for (int i = 0; i < size; i++) 
    {
        d ^= arr[i];
    }

    return c ^ d;                               // The missing number is the XOR of both results
}
