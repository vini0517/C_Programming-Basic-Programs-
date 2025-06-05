//An Armstrong number (or Narcissistic number) is a number that is equal to the sum of its digits raised to the power of the total number of digits.

//For 3-digit num
#include <stdio.h>

int main() {
    int n, originalNum, r, result = 0;
    
    // Input from user
    printf("Enter a three-digit integer: ");
    scanf("%d", &n);
    
    originalNum = n;

    // Calculate sum of cubes of digits
    while (originalNum != 0) {
        r = originalNum % 10;  // Extract last digit
        result += r * r * r; // Cube and add
        originalNum /= 10;  // Remove last digit
    }

    // Check Armstrong condition
    if (result == n)
        printf("%d is an Armstrong number.\n", n);
    else
        printf("%d is not an Armstrong number.\n", n);

    return 0;
}
/*
//For n digits
#include <stdio.h>
#include <math.h>

int main() {
    int num, originalNum, rem, result = 0, n = 0;

    // Input from user
    printf("Enter an integer: ");
    scanf("%d", &num);

    originalNum = num;

    // Count number of digits
    while (originalNum != 0) {
        originalNum /= 10;
        n++;
    }

    originalNum = num;

    // Compute sum of each digit raised to power 'n'
    while (originalNum != 0) {
        rem = originalNum % 10;
        result += pow(rem, n);
        originalNum /= 10;
    }

    // Check Armstrong condition
    if (result == num)
        printf("%d is an Armstrong number.\n", num);
    else
        printf("%d is not an Armstrong number.\n", num);

    return 0;
}
*/
