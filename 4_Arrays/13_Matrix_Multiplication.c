//Multiplying Matrix with a scalar value
/*
#include <stdio.h>  

int main()  
{  
    int M[10][10], result[10][10], i, j, r, c, scalar;  
    
    // Input the number of rows and columns
    printf("Enter the number of rows and columns of the matrix: ");
    scanf("%d %d", &r, &c);  
    
    // Input matrix elements
    printf("Enter the elements of the matrix:\n");
    for(i = 0; i < r; i++)  
    {  
        for(j = 0; j < c; j++)  
        {  
            scanf("%d", &M[i][j]);  
        }  
    }  
    
    // Input scalar value
    printf("Enter the scalar value to multiply with: ");
    scanf("%d", &scalar);  
    
    // Multiply each element of the matrix by the scalar value
    for(i = 0; i < r; i++)  
    {  
        for(j = 0; j < c; j++)  
        {  
            result[i][j] = M[i][j] * scalar;  
        }  
    }  
    
    // Display the result matrix
    printf("\nMatrix after multiplying with scalar %d:\n", scalar);
    for(i = 0; i < r; i++)  
    {  
        for(j = 0; j < c; j++)  
        {  
            printf("%d ", result[i][j]);  
        }  
        printf("\n");
    }  
    
    return 0;  
}
*/

//Multiplcation of 2 matrices
#include <stdio.h>  

int main()  
{  
    int A[10][10], B[10][10], C[10][10], i, j, k, m, n, p;  
    
    // Input the dimensions of the matrices
    printf("Enter the number of rows and columns of matrix A: ");
    scanf("%d %d", &m, &n);  
    
    printf("Enter the number of rows and columns of matrix B: ");
    scanf("%d %d", &n, &p);  // Note: number of columns of A should be equal to rows of B
    
    // Input matrix A elements
    printf("Enter the elements of matrix A:\n");
    for(i = 0; i < m; i++)  
    {  
        for(j = 0; j < n; j++)  
        {  
            scanf("%d", &A[i][j]);  
        }  
    }  
    
    // Input matrix B elements
    printf("Enter the elements of matrix B:\n");
    for(i = 0; i < n; i++)  
    {  
        for(j = 0; j < p; j++)  
        {  
            scanf("%d", &B[i][j]);  
        }  
    }  
    
    // Perform matrix multiplication: C = A * B
    for(i = 0; i < m; i++)  
    {  
        for(j = 0; j < p; j++)  
        {  
            C[i][j] = 0;
            for(k = 0; k < n; k++)  
            {  
                C[i][j] += A[i][k] * B[k][j];  
            }  
        }  
    }  
    
    // Display the result of matrix multiplication
    printf("\nResultant Matrix (C = A * B):\n");
    for(i = 0; i < m; i++)  
    {  
        for(j = 0; j < p; j++)  
        {  
            printf("%d ", C[i][j]);  
        }  
        printf("\n");
    }  
    
    return 0;  
}
