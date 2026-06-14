//  Write a program to Find maximum frequency element.

//
//
//

#include <stdio.h>

int main() {
    // Initialize a test array and its size
    int arr[] = {4, 2, 7, 4, 7, 5, 7, 4, 7, 6};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    // Visited array to avoid recalculating duplicates
    int visited[n];
    for (int i = 0; i < n; i++) {
        visited[i] = 0;
    }

    int max_element = arr[0];
    int max_frequency = 0;

    // Outer loop to select each element
    for (int i = 0; i < n; i++) {
        // Skip this element if it has already been counted
        if (visited[i] == 1) {
            continue;
        }

        int current_frequency = 1;

        // Inner loop to find all duplicates of the selected element
        for (int j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                current_frequency++;
                visited[j] = 1; // Mark as visited so we don't re-count it
            }
        }

        // Update the maximum frequency and the corresponding element
        if (current_frequency > max_frequency) {
            max_frequency = current_frequency;
            max_element = arr[i];
        }
    }

    // Print the results
    printf("Array elements: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    printf("The element with the maximum frequency is: %d\n", max_element);
    printf("It appeared %d times.\n", max_frequency);

    return 0;
}

