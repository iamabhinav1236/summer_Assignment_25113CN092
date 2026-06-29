// Write a program to Multiply matrices. 

// Approach Used- Multiplying two matrices by taking the dot product of rows of the first matrix with columns of the second matrix
// Difficulty Level- Medium(Learnt the concept of dot product for Matrix Multiplication)
// Concept Used- Use of functions, loops, if-else conditions and arrays.

#include <stdio.h>
void multiplyMatrices(int r1, int c1, int r2, int c2, int mat1[r1][c1], int mat2[r2][c2], int result[r1][c2]);

int main() 
{
    int r1, c1, r2, c2, i, j;               // Initialize variables
    
    printf("Enter rows and columns of first matrix: ");
    scanf("%d %d", &r1, &c1);
    
    printf("Enter rows and columns of second matrix: ");
    scanf("%d %d", &r2, &c2);
    
    if (c1 != r2) 
    {
        printf("Matrix multiplication not possible! Columns of first matrix must equal rows of second.\n");
        return 0;
    }
    
    int mat1[r1][c1], mat2[r2][c2], result[r1][c2];     // Initialize matrices
  
    printf("Enter elements of first matrix:\n");

    for (i = 0; i < r1; i++) 
    {
        for (j = 0; j < c1; j++) 
        {
            scanf("%d", &mat1[i][j]);
        }
    }
    
    printf("Enter elements of second matrix:\n");

    for (i = 0; i < r2; i++) 
    {
        for (j = 0; j < c2; j++) 
        {
            scanf("%d", &mat2[i][j]);
        }
    }

    multiplyMatrices(r1, c1, r2, c2, mat1, mat2, result);        // Calling function to multiply matrices

    printf("Resultant Matrix after Multiplication:\n");

    for (i = 0; i < r1; i++) 
    {
        for (j = 0; j < c2; j++) 
        {
            printf("%d\t", result[i][j]);                        // Printing result matrix
        }
        printf("\n");
    }

    return 0;
}

void multiplyMatrices(int r1, int c1, int r2, int c2, int mat1[r1][c1], int mat2[r2][c2], int result[r1][c2]) 
{
    int i, j, k;

    for (i = 0; i < r1; i++) 
    {
        for (j = 0; j < c2; j++) 
        {
            result[i][j] = 0;                                    // Initialize result 

            for (k = 0; k < c1; k++) 
            {
                result[i][j] += mat1[i][k] * mat2[k][j];         // Dot product of row and column
            }
        }
    }
}
