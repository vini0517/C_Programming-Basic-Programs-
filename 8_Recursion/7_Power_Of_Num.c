#include <stdio.h>

int power(int base, int exp) {
    if (exp == 0)
        return 1; // Base case: Any number raised to 0 is 1
    return base * power(base, exp - 1); // Recursive case
}

int main() {
    int base, exp;
    printf("Enter base and exponent: ");
    scanf("%d %d", &base, &exp);
    
    printf("%d^%d = %d\n", base, exp, power(base, exp));
    return 0;
}
