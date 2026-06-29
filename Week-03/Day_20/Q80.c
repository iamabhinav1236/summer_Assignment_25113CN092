// Write a program to Find column-wise sum. 

// Approach Used- Calculate the sum of each column by iterating through all rows of that column
// Difficulty Level- Easy
// Concept Used- use of functions, loops, if-else conditions and arrays.

#include <stdio.h>
void columnWiseSum(int rows, int cols, int mat[rows][cols]);

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

    columnWiseSum(rows, cols, mat);     // Calling function to calculate column-wise sum

    return 0;
}

void columnWiseSum(int rows, int cols, int mat[rows][cols]) 
{
    int i, j, sum;

    for (j = 0; j < cols; j++) 
    {
        sum = 0;                        // Reset sum for each row in each iteration

        for (i = 0; i < rows; i++) 
        {
            sum += mat[i][j];           // Add elements of the column
        }
        printf("Sum of column %d = %d\n", j + 1, sum);
    }
}
