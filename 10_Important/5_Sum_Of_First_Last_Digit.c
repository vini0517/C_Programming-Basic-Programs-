#include <stdio.h>

int main() {
    int n, First, Last;
    
    // Input number from user
    printf("Enter a number: ");
    scanf("%d", &n);

    // Get the last digit
    Last = n % 10;

    // Get the first digit by continuously dividing n by 10
    First = n;
    while (First >= 10) {
        First /= 10;
    }

    printf("Addition of first and last digit is: %d + %d = %d\n", First, Last, First + Last);

    return 0;
}
