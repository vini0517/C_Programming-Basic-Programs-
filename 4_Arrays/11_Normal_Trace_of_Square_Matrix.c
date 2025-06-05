//Normal and Trace of Square Matrix
//Normal: The square root of the sum of the squares of each element of the matrix 
//Trace: The sum of the diagonal elements of a matrix
#include <stdio.h>
#include <math.h> 

int main() {
    int i, j, n, matrix[10][10], trace = 0, sum_of_squares = 0;
    double normal;  

    printf("Enter the size of the square matrix: ");
    scanf("%d", &n);

    printf("Enter the %d elements of the matrix:\n", n * n);
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
            sum_of_squares += matrix[i][j] * matrix[i][j]; 
        }
    }

    normal = sqrt(sum_of_squares);  

    for (i = 0; i < n; i++) {
        trace += matrix[i][i];  // Sum of diagonal elements
    }

    printf("\nThe Normal of the given matrix is: %.2f", normal);
    printf("\nThe Trace of the given matrix is: %d\n", trace);

    return 0;
}
