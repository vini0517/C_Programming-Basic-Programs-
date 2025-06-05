//C Program to Find Roots of Quadratic Equation

#include <stdio.h>

int main() {
    float P, r, n, SI;

    // Taking input from the user
    printf("Enter Principal amount: ");
    scanf("%f", &P);
    
    printf("Enter Rate of Interest (in percentage): ");
    scanf("%f", &r);
    
    printf("Enter Time (in years): ");
    scanf("%f", &n);

    // Simple Interest formula: SI = (P × R × T) / 100
    SI = (P * r * n) / 100;

    // Display the result
    printf("Simple Interest = %.2f\n", SI);

    return 0;
}
