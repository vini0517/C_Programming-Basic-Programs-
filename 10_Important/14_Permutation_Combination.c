#include <stdio.h>

// Function to calculate factorial
long factorial(int num) {
    long fact = 1;
    for (int i = 1; i <= num; i++) {
        fact *= i;
    }
    return fact;
}

int main() {
    int n, r;
    long nPr, nCr;

    // Input values of n and r
    printf("Enter value of n: ");
    scanf("%d", &n);
    printf("Enter value of r: ");
    scanf("%d", &r);

    // Check if input is valid
    if (r > n) {
        printf("Invalid input! r should be less than or equal to n.\n");
        return 1;
    }

    // Calculate nPr and nCr
    nPr = factorial(n) / factorial(n - r);
    nCr = factorial(n) / (factorial(r) * factorial(n - r));

    // Print results
    printf("\nPermutation (nPr) = %ld", nPr);
    printf("\nCombination (nCr) = %ld\n", nCr);

    return 0;
}
