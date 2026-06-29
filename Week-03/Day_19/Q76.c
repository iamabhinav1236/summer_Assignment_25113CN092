// Write a program to Find diagonal sum. 

// Approach Used- Calculating the sum by adding the diagonal elements (or elements having same ith position) of the matrices
// Difficulty Level- Easy
// Concept Used- Use of functions, loops, if-else conditions and arrays.

#include <stdio.h>
int diagonalSum(int size, int mat[size][size]);

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

    int sum = diagonalSum(size, mat);        // Calling function to find diagonal sum

    printf("Sum of main diagonal elements = %d\n", sum);

    return 0;
}

int diagonalSum(int size, int mat[size][size]) 
{
    int i, sum = 0;

    for (i = 0; i < size; i++) 
    {
        sum += mat[i][i];                    // Adding elements where row index = column index
    }
    return sum;
}
