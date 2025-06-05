#include <stdbool.h>
#include <stdio.h>

bool isPrime(int n) {
    if (n < 2) // 0 and 1 are not prime numbers
        return false;

    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0)
            return false;
    }
    return true;
}

int main() {
    int N;
    scanf("%d", &N);  

    for (int i = 1; i <= N; i++) {
        if (isPrime(i)) {
            printf("%d ", i);
        }
    }
    
    return 0;
}
