#include <stdio.h>
#include <math.h>

// Function to convert octal to decimal
int octalToDecimal(int octal) {
    int decimal = 0, i = 0, remainder;
    while (octal != 0) {
        remainder = octal % 10;
        decimal += remainder * pow(8, i);
        octal /= 10;
        i++;
    }
    return decimal;
}

int main() {
    int octal;
    printf("Enter an octal number: ");
    scanf("%d", &octal);
    
    int decimal = octalToDecimal(octal);
    
    printf("Decimal: %d\n", decimal);
    
    // Binary conversion (from decimal)
    printf("Binary: ");
    for (int i = 31; i >= 0; i--) {
        printf("%d", (decimal >> i) & 1);
        if (i % 4 == 0) printf(" "); // Space every 4 bits for readability

    }
    printf("\n");

    // Hexadecimal conversion (from decimal)
    printf("Hexadecimal: %X\n", decimal);

    return 0;
}
