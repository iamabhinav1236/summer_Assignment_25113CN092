// Write a program to Transpose matrix. 

// Approach Used- Transpose means converting rows into columns and columns into rows
// Difficulty Level- Easy
// Concept Used- use of functions, loops, if-else conditions and arrays.

#include <stdio.h>
void transposeMatrix(int rows, int cols, int mat[rows][cols], int result[cols][rows]);

int main() 
{
    int rows, cols, i, j;               // Initialize variables
    
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    
    printf("Enter the number of columns: ");
    scanf("%d", &cols);
    
    int mat[rows][cols], result[cols][rows];     // Initialize matrices
  
    printf("Enter elements of the matrix:\n");
    
    for (i = 0; i < rows; i++) 
    {
        for (j = 0; j < cols; j++) 
        {
            scanf("%d", &mat[i][j]);
        }
    }

    transposeMatrix(rows, cols, mat, result);        // Calling function to transpose matrix

    printf("Transpose of the Matrix:\n");
    for (i = 0; i < cols; i++) 
    {
        for (j = 0; j < rows; j++) 
        {
            printf("%d\t", result[i][j]);            // Printing transpose matrix
        }
        printf("\n");
    }

    return 0;
}

void transposeMatrix(int rows, int cols, int mat[rows][cols], int result[cols][rows]) 
{
    int i, j;
    for (i = 0; i < rows; i++) 
    {
        for (j = 0; j < cols; j++) 
        {
            result[j][i] = mat[i][j];                // Converting rows into columns
        }
    }
}
