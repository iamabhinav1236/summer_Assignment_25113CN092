// Write a program to Frequency of an element. 

// Approach Used- Initilizing the variables and updating them when visited and skipping them by updating if already visited
// Difficulty Level- Easy
// Concept Used- Use of for loop and Arrays

#include <stdio.h>

int main() 
{
    int n, i, j, count;                     // Initalizing Variables

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];                     // Initalizing Array
    int visited[n];                     // Array to keep track of counted elements

    printf("Enter %d elements:\n", n);

    for(i = 0; i < n; i++)                  // for loop for taking input of numbers for Array
    {
        scanf("%d", &arr[i]);
        visited[i] = 0;                     // Initialize all elements as not visited
    }

    // Printing the following for making the output impressive

    printf("\nFrequency of elements:\n");
    printf("---------------------\n");
    printf(" Element | Frequency\n");
    printf("---------------------\n");

    for(i = 0; i < n; i++)                  // For counting the frequency of each element
    {
        if(visited[i] == 1)                 // Skip this element if already counted
        {
            continue;                   // To leave the already counted number
        }

        count = 1;                   // Initalizing count  
       
        for(j = i + 1; j < n; j++)                     // Check the rest of the array for duplicates
        {
            if(arr[i] == arr[j]) 
            {
                count++;
                visited[j] = 1;                    
            }
        }

        
        printf(" %d | %d\n", arr[i], count);                // Print the count 
    }
    printf("---------------------\n");

    return 0;
}

