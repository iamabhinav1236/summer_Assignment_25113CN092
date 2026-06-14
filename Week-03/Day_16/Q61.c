// Write a program to Find missing number in array. 
 
// 
// 
// 

#include <stdio.h>

// Function to find the missing number using Bitwise XOR
int findMissingNumber(int arr[], int size) {
    int xor1 = 0;
    int xor2 = 0;
    int N = size + 1; // Expected total number of elements

    // XOR all numbers from 1 to N
    for (int i = 1; i <= N; i++) {
        xor1 ^= i;
    }

    // XOR all elements present in the array
    for (int i = 0; i < size; i++) {
        xor2 ^= arr[i];
    }

    // The missing number is the XOR of both results
    return xor1 ^ xor2;
}

int main() {
    // Array of size N-1 (contains 7 elements, means N = 8)
    int arr[] = {1, 2, 4, 6, 3, 7, 8};
    int size = sizeof(arr) / sizeof(arr[0]);

    int missingNumber = findMissingNumber(arr, size);

    printf("The given array is: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    
    printf("\nThe missing number is: %d\n", missingNumber);

    return 0;
}
