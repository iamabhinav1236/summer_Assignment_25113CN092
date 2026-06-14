// Write a program to Input and display array. 

// Approach Used- Taking input by scanf function continuously by for loop and printing the output.
// Difficulty Level- Easy
// Concept Used- Use of Array and for loop

#include<stdio.h>

int main()
{
    int n,i;                // Initialize variables
    
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    
    int arr[n];             // Initalize size of array
  
    printf("Enter the elements:\n" , n);

    for (i = 0; i < n; i++)                 // for loop for taking input of numbers for Array
    {
        scanf("%d", &arr[i]);
    }
   
    printf("The elements in the array are: ");              
    
    for (i = 0; i < n; i++)                 // for loop for printing of numbers
    {
        printf("%d ", arr[i]);
    }

    printf("\n");

    return 0;

}