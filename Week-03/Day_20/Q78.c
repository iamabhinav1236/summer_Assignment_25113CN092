// Write a program to Check symmetric matrix. 

// Approach Used- A matrix is symmetric if it is equal to its transpose, means element at (i,j) equals element at (j,i)
// Difficulty Level- Easy
// Concept Used- Use of functions, loops, if-else conditions and arrays.

#include <stdio.h>
int isSymmetric(int size, int mat[size][size]);                 // Function Declaration

int main() 
{
    int size, i, j;               // Initialize variables
    
    printf("Enter the size of the square matrix: ");
    scanf("%d", &size);
    
    int mat[size][size];          // Initialize matrix
  
    printf("Enter elements of the matrix:\n");

    for (i = 0; i < size; i++) 
    {
        for (j = 0; j < size; j++) 
        {
            scanf("%d", &mat[i][j]);
        }
    }

    if (isSymmetric(size, mat)) 
    {
        printf("The matrix is symmetric.\n");
    } 
    else 
    {
        printf("The matrix is not symmetric.\n");
    }

    return 0;
}

int isSymmetric(int size, int mat[size][size])              // Function to check symmetric matrix
{
    int i, j;

    for (i = 0; i < size; i++) 
    {
        for (j = 0; j < size; j++) 
        {
            if (mat[i][j] != mat[j][i])          // Check if element at (i,j) equals element at (j,i)
            {
                return 0;                        // Means Not symmetric Matrix
            }
        }
    }
    return 1;                                    // Means Symmetric Matrix
}
