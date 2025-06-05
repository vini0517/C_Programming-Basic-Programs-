//LCM stands for least common multiple. The least common multiple of two numbers is the smallest number that is a multiple of both of them.

//recursion
#include <stdio.h>

// Recursive function to find the GCD of two numbers
int gcd(int a, int b) {
    if (b == 0)
        return a;
    return gcd(b, a % b);  // Recursion
}

// Function to calculate LCM using GCD
int lcm(int n1, int n2) {
    return (n1 * n2) / gcd(n1, n2);  // Using LCM formula
}

int main() {
    int n1, n2;
    
    printf("Enter two positive integers: ");
    scanf("%d %d", &n1, &n2);

    // Calculate LCM using the recursive approach
    printf("The LCM of %d and %d is %d.\n", n1, n2, lcm(n1, n2));

    return 0;
}


/*
//Normal
#include <stdio.h>

int main() {

    int n1, n2, max, lcm;

    printf("Enter two positive integers: ");
    scanf("%d %d", &n1, &n2);

    // maximum number between n1 and n2 is stored in max
    max = (n1 > n2) ? n1 : n2;

    lcm = max;

    while ((lcm % n1 != 0) || (lcm % n2 != 0)) {
        lcm += max;
    }

    printf("The LCM of %d and %d is %d.", n1, n2, lcm);

    return 0;
}*/