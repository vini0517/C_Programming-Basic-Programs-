#include <stdio.h>
#include <math.h>

// Function to convert hexadecimal to decimal
int hexToDecimal(char hex[]) {
    int decimal = 0, i = 0, value, len;
    while (hex[i] != '\0') {
        if (hex[i] >= '0' && hex[i] <= '9') {
            value = hex[i] - '0';
        } else if (hex[i] >= 'A' && hex[i] <= 'F') {
            value = hex[i] - 'A' + 10;
        } else if (hex[i] >= 'a' && hex[i] <= 'f') {
            value = hex[i] - 'a' + 10;
        }
        
        len = strlen(hex);
        decimal += value * pow(16, len - i - 1);
        i++;
    }
    return decimal;
}

int main() {
    char hex[20];
    printf("Enter a hexadecimal number: ");
    scanf("%s", hex);
    
    int decimal = hexToDecimal(hex);
    
    printf("Decimal: %d\n", decimal);
    
    // Binary conversion (from decimal)
    printf("Binary: ");
    for (int i = 31; i >= 0; i--) {
        printf("%d", (decimal >> i) & 1);
    }
    printf("\n");

    // Octal conversion (from decimal)
    printf("Octal: %o\n", decimal);

    return 0;
}
