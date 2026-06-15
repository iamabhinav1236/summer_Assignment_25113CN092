//  Write a program to Find maximum frequency element.

// Approach Used- Initilizing the variables and updating them when visited and skipping them by updating if already visited
// Difficulty Level- Easy
// Concept Used- Use of for loop and Arrays

#include <stdio.h>

int main() 
{
    int x,i;                // Initialize variables
    
    printf("Enter the size of the array: ");
    scanf("%d", &x);
    
    int arr[x];             // Initalize size of array
  
    printf("Enter the elements:\n" , x);

    for (i = 0; i < x; i++)                 // for loop for taking input of numbers for Array
    {
        scanf("%d", &arr[i]);
    }

    int n = sizeof(arr) / sizeof(arr[0]);
       
    int visited[n];

    for (int i = 0; i < n; i++) 
    {
        visited[i] = 0;
    }

    int max_element = arr[0];
    int max_frequency = 0;

    for (int i = 0; i < n; i++)                 // Outer loop to select each element
    {
        if (visited[i] == 1)                // Skip this element if already counted
        {
            continue;
        }

        int current_frequency = 1;
        
        for (int j = i + 1; j < n; j++)                     // Inner loop to find all duplicates of the selected element
        {
            if (arr[i] == arr[j]) 
            {
                current_frequency++;
                visited[j] = 1;                          // Mark as visited so we don't re-count it
            }
        }

        if (current_frequency > max_frequency)                      // Update the maximum frequency 
        {
            max_frequency = current_frequency;
            max_element = arr[i];
        }
    }

    printf("Array elements: ");                       // Print the results
    
    for (int i = 0; i < n; i++) 
    {
        printf("%d ", arr[i]);
    }

    printf("\n");
    
    printf("The element with the maximum frequency is: %d\n", max_element);
    printf("It appeared %d times.\n", max_frequency);

    return 0;
}

