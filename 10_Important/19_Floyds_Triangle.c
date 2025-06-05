//Floyd’s triangle is a right-angled triangular arrangement of natural numbers, where the first row contains 1, 
//the second row contains 2 and 3, the third row contains 4, 5, and 6, and so on.
/*
1
2 3
4 5 6
7 8 9 10
11 12 13 14 15
*/
#include <stdio.h>

int main() {
    int rows, n = 1;

    // Taking user input
    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    // Generating Floyd’s Triangle
    for (int i = 1; i <= rows; i++) {  
        for (int j = 1; j <= i; j++) { 
            printf("%d ", n);
            n++; // Increment number
        }
        printf("\n"); // Move to next row
    }

    return 0;
}


