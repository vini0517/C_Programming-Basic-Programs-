#include <stdio.h>

// Function to calculate Fibonacci number using recursion
int fibonacci(int n) {
    if (n == 0)
        return 0;  // Base case: Fibonacci of 0 is 0
    else if (n == 1)
        return 1;  // Base case: Fibonacci of 1 is 1
    else
        return (fibonacci(n - 1) + fibonacci(n - 2));  // Recursive case
}

int main() {
    int n;

    // Input the number of terms for Fibonacci series
    printf("Enter the number of terms: ");
    scanf("%d", &n);

    // Print Fibonacci series
    printf("Fibonacci Series: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", fibonacci(i));  // Call the recursive function for each term
    }

    return 0;
}
