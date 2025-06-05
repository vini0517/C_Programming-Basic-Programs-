//Determinant of a 2×2 Matrix

#include <stdio.h>

int main() {
    int a, b, c, d, determinant;

    // Input 2×2 matrix elements
    printf("Enter elements of 2x2 matrix (row-wise):\n");
    scanf("%d %d", &a, &b);
    scanf("%d %d", &c, &d);

    // Calculate determinant
    determinant = (a * d) - (b * c);

    // Output result
    printf("Determinant of the matrix = %d\n", determinant);

    return 0;
}


/*
//Determinant of a n×n Matrix
#include <stdio.h>

int determinant(int matrix[10][10], int n) {
    if (n == 1) 
        return matrix[0][0];

    if (n == 2) 
        return (matrix[0][0] * matrix[1][1]) - (matrix[0][1] * matrix[1][0]);

    int det = 0, temp[10][10];
    
    for (int col = 0; col < n; col++) {
        int subi = 0; // Row index for submatrix

        for (int i = 1; i < n; i++) { // Skip first row
            int subj = 0; // Column index for submatrix
            for (int j = 0; j < n; j++) {
                if (j == col) continue; // Skip current column
                temp[subi][subj++] = matrix[i][j]; // Form submatrix
            }
            subi++;
        }
        
        // Recursive determinant calculation
        int subDet = determinant(temp, n - 1);
        det += (col % 2 == 0 ? 1 : -1) * matrix[0][col] * subDet;
    }
    
    return det;
}

int main() {
    int matrix[10][10], n;

    // Input matrix size
    printf("Enter the size of square matrix: ");
    scanf("%d", &n);

    // Input matrix elements
    printf("Enter the matrix elements:\n");
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            scanf("%d", &matrix[i][j]);

    // Calculate and print determinant
    printf("Determinant of the matrix = %d\n", determinant(matrix, n));

    return 0;
}
*/
