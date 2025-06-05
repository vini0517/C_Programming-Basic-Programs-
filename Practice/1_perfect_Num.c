//Perfect number =>6 is divided by 1,2,3,don't take 6.1+2+3=6
//Method 1: Using function
#include <stdio.h>
#include <stdbool.h>

bool isPerfectNumber(int n) {
    int sum = 0;
    
    for (int i = 1; i <= n / 2; i++) {
        if (n % i == 0) {
            sum += i;
        }
    }

    return sum == n;
}

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    if (isPerfectNumber(n)) {
        return true;  //perfect number
    } else {
        return false; //not a perfect number
    }
}

/*
//Method 2: Without using function
#include <stdio.h>

int main() {
    int n, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &n);

    // Loop to check divisors
    for (int i = 1; i <= n / 2; i++) {
        if (n % i == 0) {
            sum += i;
        }
    }

    // Check if the sum of divisors equals the number
    if (sum == n) {
        printf("%d is a Perfect Number\n", n);
    } else {
        printf("%d is NOT a Perfect Number\n", n);
    }

    return 0;
}
*/
