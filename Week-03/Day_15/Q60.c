// Write a program to Move zeroes to end. 

//
//
//

#include <stdio.h>

// Function to move all zeroes to the end of the array
void moveZeroesToEnd(int arr[], int size) {
    int nonZeroIndex = 0;

    // Step 1: Shift all non-zero elements to the front
    for (int i = 0; i < size; i++) {
        if (arr[i] != 0) {
            arr[nonZeroIndex] = arr[i];
            nonZeroIndex++;
        }
    }

    // Step 2: Fill the rest of the array with zeroes
    while (nonZeroIndex < size) {
        arr[nonZeroIndex] = 0;
        nonZeroIndex++;
    }
}

// Driver code to test the program
int main() {
    int arr[] = {1, 0, 3, 0, 12, 0, 5, 8};
    int size = sizeof(arr) / sizeof(arr[0]);

    printf("Original array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Call the function
    moveZeroesToEnd(arr, size);

    printf("Modified array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
