//C Program to Find Roots of Quadratic Equation
//QE: ax2 + bx + c = 0
//Roots: x = (-b ± √ (b2 - 4ac) )/2a
//r->root

#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c, discriminant, r1, r2, real, img;

    // Taking input from user
    printf("Enter coefficients a, b, and c: ");
    scanf("%f %f %f", &a, &b, &c);

    // Calculate discriminant
    discriminant = (b * b) - (4 * a * c);

    // Checking conditions for different types of roots
    if (discriminant > 0) {
        // Two distinct real roots
        r1 = (-b + sqrt(discriminant)) / (2 * a);
        r2 = (-b - sqrt(discriminant)) / (2 * a);
        printf("Roots are real and distinct:\nRoot 1 = %.2f\nRoot 2 = %.2f\n", r1, r2);
    } 
    else if (discriminant == 0) {
        // One real root (equal roots)
        r1 = r2 = -b / (2 * a);
        printf("Roots are real and equal:\nRoot = %.2f\n", r1);
    } 
    else {
        // Complex roots
        real = -b / (2 * a);
        img = sqrt(-discriminant) / (2 * a);
        printf("Roots are complex and imaginary:\n");
        printf("Root 1 = %.2f + %.2fi\n", real, img);
        printf("Root 2 = %.2f - %.2fi\n", real, img);
    }

    return 0;
}
