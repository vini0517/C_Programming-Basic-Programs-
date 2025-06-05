//C Program to find the largest Element in an Array using Recursion
#include <stdio.h>

int max(int a, int b) {
    return (a > b) ? a : b;
}

int findMaxRec(int A[], int n) {
    if (n == 1)
        return A[0];  // Base case: If one element, return it
    return max(A[n - 1], findMaxRec(A, n - 1));
}

int main() {
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Largest element in the array: %d\n", findMaxRec(arr, n));
    return 0;
}
