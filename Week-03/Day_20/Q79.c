// Write a program to Find row-wise sum. 

// Approach Used- Calculate the sum of each row by iterating through all columns of that row
// Difficulty Level- Easy
// Concept Used- Use of functions, loops, if-else conditions and arrays.

#include <stdio.h>
void rowWiseSum(int rows, int col, int mat[rows][col]);

int main() 
{
    int rows, cols, i, j;               // Initialize variables
    
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    
    printf("Enter the number of columns: ");
    scanf("%d", &cols);
    
    int mat[rows][cols];                // Initialize matrix
  
    printf("Enter elements of the matrix:\n");

    for (i = 0; i < rows; i++) 
    {
        for (j = 0; j < cols; j++) 
        {
            scanf("%d", &mat[i][j]);
        }
    }

    rowWiseSum(rows, cols, mat);        // Calling function

    return 0;
}

void rowWiseSum(int rows, int col, int mat[rows][col])              // Function to calculate row-wise sum
{
    int i, j, sum;

    for (i = 0; i < rows; i++) 
    {
        sum = 0;                        // Reset sum for each row in each iteration

        for (j = 0; j < col; j++) 
        {
            sum += mat[i][j];           // Add elements of the row
        }

        printf("Sum of row %d = %d\n", i + 1, sum);
    }
}
