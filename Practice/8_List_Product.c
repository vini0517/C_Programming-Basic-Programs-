
//Write a program that takes a list of numbers and returns a new list where each element is 
//the product of all elements except itself, without using division.

#include <stdio.h>

void productArray(int arr[], int n, int result[]) {
    // For each element in the array, calculate the product of all other elements
    for (int i = 0; i < n; i++) {
        result[i] = 1;
        for (int j = 0; j < n; j++) {
            if (i != j) {
                result[i] *= arr[j];
            }
        }
    }
}


int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int result[n];

    productArray(arr, n, result);

    printf("Resulting Array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", result[i]);
    }

    return 0;
}
