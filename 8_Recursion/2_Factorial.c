#include <stdio.h>

// Function to find factorial using recursion
int factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;  // Base case: factorial of 0 or 1 is 1
    }
    return n * factorial(n - 1);  // Recursive case: n * factorial of (n-1)
}

int main() {
    int num;

    // Input number
    printf("Enter a number: ");
    scanf("%d", &num);

    // Calculate and display the factorial
    printf("Factorial of %d is: %d\n", num, factorial(num));

    return 0;
}
