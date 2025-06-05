#include <stdio.h>

int reverseNum(int n, int rev) {
    if (n == 0) {
        return rev; 
    }
    return reverseNum(n / 10, rev * 10 + n % 10);
}

int isPalindrome(int n) {
    return (n == reverseNum(n, 0)); // Compare original with reversed
}

int main() {
    int n;
    printf("Enter a Num: ");
    scanf("%d", &n);

    if (isPalindrome(n))
        printf("%d is a Palindrome\n", n);
    else
        printf("%d is Not a Palindrome\n", n);

    return 0;
}
