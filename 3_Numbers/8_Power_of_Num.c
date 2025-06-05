//Method 1: Power of a Number using loop
#include <stdio.h>

long long power(int base, int exp) {
    long long result = 1;
    for (int i = 0; i < exp; i++) {
        result *= base;
    }
    return result;
}

int main() {
    int base, exp;
    scanf("%d %d", &base, &exp);
    
    printf("%lld\n", power(base, exp));
    return 0;
}



/*
//Method 2: Power of a Number Using pow()
#include <stdio.h>
#include <math.h>

int main() {
    double base, exp, res;
    printf("Enter Base:");
    scanf("%lf", &base);
    printf("\nEnter exp:");
    scanf("%lf", &exp);

    res = pow(base, exp);  // Using the pow() function
    printf("%.2lf\n", res);

    return 0;
}
*/


