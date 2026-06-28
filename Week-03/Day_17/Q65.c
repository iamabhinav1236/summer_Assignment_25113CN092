// Write a program to Merge arrays. 

// Approach Used- Simply taking the arrays as input and then merging them into merged array by for loop
// Difficulty Level- Easy
// Concept Used- Use of loops and arrays 

#include <stdio.h>

int main() 
{
    int arr1[50], arr2[50], merged[100];
    int size1, size2, i, k = 0;
    
    printf("Enter size of first array: ");              // Input for the first array
    scanf("%d", &size1);

    printf("Enter elements of first array: ");

    for(i = 0; i < size1; i++) 
    {
        scanf("%d", &arr1[i]);
        merged[k++] = arr1[i];
    }

    
    printf("Enter size of second array: ");                     // Input for the second array
    scanf("%d", &size2);
    printf("Enter elements of second array: ");
    for(i = 0; i < size2; i++) 
    {
        scanf("%d", &arr2[i]);
        merged[k++] = arr2[i];
    }

    
    printf("The merged array is: ");                            // Output the merged array

    for(i = 0; i < k; i++) 
    {
        printf("%d ", merged[i]);
    }
    printf("\n");

    return 0;
}
