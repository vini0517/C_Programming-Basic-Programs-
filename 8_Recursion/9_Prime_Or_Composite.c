#include <stdio.h>

int isPrimeRec(int n, int i) {
    if (n <= 1)
        return 0; // 0 and 1 are not prime
    if (i == 1)
        return 1; // Prime if no divisor found till 1
    if (n % i == 0)
        return 0; // Not prime if divisible by any number

    return isPrimeRec(n, i - 1); // Recursive check for next divisor
}

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    if (isPrimeRec(n, n / 2))  // Start checking from n/2
        printf("%d is a Prime number\n", n);
    else
        printf("%d is a Composite number\n", n);

    return 0;
}
