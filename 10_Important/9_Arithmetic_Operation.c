//C program to show basic Arithmetic Operations and role of Typecasting

#include <stdio.h>

int main() {
    int a, b;
    float div;

    // Taking user input
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    // Performing arithmetic operations
    printf("\nAddition: %d + %d = %d", a, b, a + b);
    printf("\nSubtraction: %d - %d = %d", a, b, a - b);
    printf("\nMultiplication: %d * %d = %d", a, b, a * b);

    // Integer Division (Without Typecasting)
    printf("\nInteger Division: %d / %d = %d", a, b, a / b);

    // Typecasting to float for precise division
    div = (float)a / b;
    printf("\nFloat Division (with Typecasting): %d / %d = %.2f", a, b, div);

    // Modulus (Remainder) operation
    printf("\nModulus: %d %% %d = %d\n", a, b, a % b);

    return 0;
}
