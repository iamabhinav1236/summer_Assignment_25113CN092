// Write a program to Add matrices. 

// Approach Used- Subtracting two matrices of the same dimensions by adding corresponding elements
// Difficulty Level- Easy
// Concept Used- Use of functions, loops, if-else conditions and arrays.

#include <stdio.h>
void subMatrices(int rows, int cols, int mat1[rows][cols], int mat2[rows][cols], int result[rows][cols]);       // Function Declaration

int main() 
{
    int rows, cols, i, j;               // Initialize variables
    
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    
    printf("Enter the number of columns: ");
    scanf("%d", &cols);
    
    int mat1[rows][cols], mat2[rows][cols], result[rows][cols];             // Initialize matrices
  
    printf("Enter elements of first matrix:\n");

    for (i = 0; i < rows; i++) 
    {
        for (j = 0; j < cols; j++) 
        {
            scanf("%d", &mat1[i][j]);
        }
    }
    
    printf("Enter elements of second matrix:\n");

    for (i = 0; i < rows; i++) 
    {
        for (j = 0; j < cols; j++) 
        {
            scanf("%d", &mat2[i][j]);
        }
    }

    subMatrices(rows, cols, mat1, mat2, result);        // Calling function to subtract matrices

    printf("Resultant Matrix after Addition:\n");
    for (i = 0; i < rows; i++) 
    {
        for (j = 0; j < cols; j++) 
        {
            printf("%d\t", result[i][j]);               // Printing result matrix
        }
        printf("\n");
    }

    return 0;
}

void subMatrices(int rows, int cols, int mat1[rows][cols], int mat2[rows][cols], int result[rows][cols]) 
{
    int i, j;

    for (i = 0; i < rows; i++) 
    {
        for (j = 0; j < cols; j++) 
        {
            result[i][j] = mat1[i][j] - mat2[i][j];     // Subtracting corresponding elements
        }
    }
}
