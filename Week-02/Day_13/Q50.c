// Write a program to Find sum and average of array. 

// Approach Used- Taking input from User then summing the numbers and finding the average.
// Difficulty Level- Easy
// Concept Used- Use of Array, sizeof operator and for loop

#include <stdio.h>

int main() 
{
    int n,i;                        // Initialize variables
    
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    
    int arr[n];      // Initalize size of array
  
    printf("Enter the elements:\n" , n);

    for (i = 0; i < n; i++)                             // for loop for taking input of numbers for Array
    {
        scanf("%d", &arr[i]);
    }
    
    int size = sizeof(arr) / sizeof(arr[0]);
    int sum = 0;                        // Initalize the sum variable 
    
    for (int i = 0; i < size; i++)              //Loop to calculate sum
    {
        sum += arr[i];
    }
    
    float average = (float)sum / size;              // Finding Average 

     printf("Sum = %d\n", sum);
     printf("Average = %.2f\n", average);

     return 0;

}

