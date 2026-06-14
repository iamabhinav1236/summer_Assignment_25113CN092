// Write a program to Second largest element.

// Approach Used- Initilizing the variables and updating them when visited and skipping them by updating if already visited.
// Difficulty Level- Near to Hard
// Concept Used- Use of if-else condition, for loop, ternary Operator and Array

#include <stdio.h>

int main() 
{
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    if (n < 2)                      // Minimum two elements are required
    {
        printf("Need at least 2 elements\n");
    }

    int arr[n];
    printf("Enter the elements: ");

    for (int i = 0; i < n; i++)                     // for loop for taking input of numbers for Array
    {
        scanf("%d", &arr[i]);
    }

    int first = arr[0];
    int second = arr[1];

    if (arr[1] > arr[0])                    // Make sure 'first' holds the larger value between the first two elements
    {
        first = arr[1];
        second = arr[0];
    }

    int dis = (arr[0] != arr[1]) ? 1 : 0;                // Using Ternary Operator

    for (int i = 2; i < n; i++)                 // Loop through the remaining elements
    {
        if (arr[i] > first) 
        {
            second = first;
            first = arr[i];
            dis = 1;                            // Different values confirmed
        } 
        else if (arr[i] < first) 
        {
            
            if (!dis || arr[i] > second)                // Update second if it's the first smaller element found, 
            {                                           // or if it's strictly greater than the current second
                second = arr[i];
                dis = 1;
            }
        }
    }

    if (!dis)                  // Print the result 
    {
        printf("No second largest element (all elements equal)\n");
    } 
    else
    {
        printf("Second largest element: %d\n", second);
    }

    return 0;
}
