//Area of a Triangle = A = ½ (b × h) square units

#include <stdio.h>

int main() {
    float base, height, area;

    // Input base and height from the user
    printf("Enter the base of the triangle: ");
    scanf("%f", &base);
    printf("Enter the height of the triangle: ");
    scanf("%f", &height);

    // Calculate the area using the formula
    area = 0.5 * base * height;

    // Display the result
    printf("Area of the triangle: %.2f\n", area);

    return 0;
}
