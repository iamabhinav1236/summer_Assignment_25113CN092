// Write a program to Rotate array right.

// Approach Used- Using the functions to reverse the section of a array and then rotating it right side by d position
// Difficulty Level- Medium
// Concept Used- Use of loops, functions and Arrays

#include <stdio.h>

void reverse(int arr[], int start, int end);
void rotateR(int arr[], int n, int k);
void printA(int arr[], int n);

int main() 
{
    int x,i,d;                // Initialize variables
    
    printf("Enter the size of the array: ");
    scanf("%d", &x);
    
    int arr[x];             // Initalize size of array
  
    printf("Enter the elements:\n" , x);

    for (i = 0; i < x; i++)                 // for loop for taking input of numbers for Array
    {
        scanf("%d", &arr[i]);
    }

    int n = sizeof(arr) / sizeof(arr[0]);
    
    printf("Enter the value by which the array you want to rotate:\n" , x);
    scanf("%d", &d);                              // Number of positions to rotate left

    printf("Original Array: ");
    printA(arr, n);                         // Calling function

    rotateR(arr, n, d);                     // Calling function

    printf("Array after rotating right by %d positions: ", d);
    printA(arr, n);                         // Calling function

    return 0;
}

void reverse(int arr[], int start, int end)                      // Function to reverse a section of the array
{
    while (start < end) 
    {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}

void rotateR(int arr[], int n, int k)                   // Function to right rotate the array by k positions
{
    k = k % n;                      // if d is greater than the size of array

    if (k == 0) return;
    reverse(arr, 0, n - 1);
    reverse(arr, 0, k - 1);
    reverse(arr, k, n - 1);
}

void printA(int arr[], int n)                   // Function to print the array
{
    for (int i = 0; i < n; i++) 
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}