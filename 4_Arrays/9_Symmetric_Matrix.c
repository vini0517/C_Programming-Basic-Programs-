//
#include <stdio.h>

int main() {
    int matrix[10][10], rows, i, j, isSymmetric = 1;

    // Input square matrix size
    printf("Enter the size of square matrix: ");
    scanf("%d", &rows);

    // Input matrix elements
    printf("Enter the matrix elements:\n");
    for (i = 0; i < rows; i++)
        for (j = 0; j < rows; j++)
            scanf("%d", &matrix[i][j]);

    // Check if matrix is symmetric
    for (i = 0; i < rows; i++) {
        for (j = 0; j < rows; j++) {
            if (matrix[i][j] != matrix[j][i]) {
                isSymmetric = 0; // Not symmetric
                break;
            }
        }
        if (!isSymmetric)
            break;
    }

    // Output result
    if (isSymmetric)
        printf("The matrix is Symmetric.\n");
    else
        printf("The matrix is NOT Symmetric.\n");

    return 0;
}
