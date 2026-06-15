// Write a program to Rotate array left.

// Approach Used- Using the functions to reverse the section of a array and then rotating it left side by d position
// Difficulty Level- Medium
// Concept Used- Use of loops, functions and Arrays


#include <stdio.h>

void reverse(int arr[], int start, int end);                // Function Declaration
void left(int arr[], int n, int d);
void printA(int arr[], int size);

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
    printA(arr, n);                 // Function call

    left(arr, n, d);                      // Function call

    printf("Array after left rotation by %d: ", d);
    printA(arr, n);                 // Function call

    return 0;
}

void reverse(int arr[], int start, int end)             // Function to reverse a section of the array
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

void left(int arr[], int n, int d)                // Function to left rotate the array by d positions
{
    if (n == 0) return;
    d = d % n;                       // if d is greater than the size of array

    reverse(arr, 0, d - 1);
    reverse(arr, d, n - 1);
    reverse(arr, 0, n - 1);
}

void printA(int arr[], int size)                  // Function to print the array
{
    for (int i = 0; i < size; i++) 
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
