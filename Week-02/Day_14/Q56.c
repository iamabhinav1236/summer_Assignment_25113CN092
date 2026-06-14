// Write a program to Find duplicates in array. 

// Approach Used- Initilizing the variables and updating them when visited and skipping them by updating if already visited.
// Difficulty Level- Medium
// Concept Used- Use of if condition,for loop and Array

#include <stdio.h>

int main() 
{
    int size;                           // Initalizing the variable

    printf("Enter the number of elements in the array: ");
    scanf("%d", &size);

    if (size != 1 || size <= 0) 
    {
        printf("Invalid array size.\n");
        return 1;
    }

    int arr[size];
    int visited[size];

    printf("Enter %d elements:\n", size);                    // Taking input of array elements
                
    for (int i = 0; i < size; i++)                   // for loop for taking input of numbers for Array
    {
        scanf("%d", &arr[i]);
        visited[i] = 0;

    printf("\nDuplicate elements in the array are:\n");
    int Duplicates = 0;

    for (int i = 0; i < size; i++)                       // Loop For finding duplicates
    {
        
        if (visited[i] == 1)                            // Skip element if already assigned as a duplicate
        {
            continue;
        }

        int count = 1;
        for (int j = i + 1; j < size; j++) 
        {
            if (arr[i] == arr[j]) 
            {
                count++;
                visited[j] = 1;                     // Mark the matched element as visited
            }
        }

        if (count > 1)                          // If the element appeared more than once, print it
        {
            printf("%d ", arr[i]);
            Duplicates = 1;
        }
    }

    if (!Duplicates) 
    {
        printf("None");
    }
    printf("\n");

    return 0;
}
