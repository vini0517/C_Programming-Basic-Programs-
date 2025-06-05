//Program to determine whether a given matrix is a sparse matrix
//A matrix is said to be sparse matrix if most of the elements of that matrix are 0. 
//It implies that it contains very less non-zero elements.


#include <stdio.h>

int main() {
    int rows, cols, matrix[10][10], zeroCount = 0;

    printf("Enter rows and columns: ");
    scanf("%d %d", &rows, &cols);

    printf("Enter matrix elements:\n");
    for (int i = 0; i < rows; i++)
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
            if (matrix[i][j] == 0) // Count zero elements
                zeroCount++;
        }

    // Check if sparse
    if (zeroCount > (rows * cols) / 2)
        printf("Sparse Matrix\n");
    else
        printf("Not a Sparse Matrix\n");

    return 0;
}
