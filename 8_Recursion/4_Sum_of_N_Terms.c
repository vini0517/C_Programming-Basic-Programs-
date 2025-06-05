#include <stdio.h>

int sumOf_NTerms(int n) {
    if (n == 1)
        return 1; // Base case
    return n + sumOf_NTerms(n - 1); // Recursive case
}

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    
    printf("Sum of first %d terms: %d", n, sumOf_NTerms(n));
    return 0;
}
