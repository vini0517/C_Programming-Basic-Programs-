#include <stdio.h>

// Function to sort array in ascending order
void sortAscending(int arr[], int n) {
    int i, j, temp;
    for (i = 0; i < n-1; i++) {
        for (j = 0; j < n-i-1; j++) {
            if (arr[j] > arr[j+1]) {
                // Swap arr[j] and arr[j+1]
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

// Function to sort array in descending order
void sortDescending(int arr[], int n) {
    int i, j, temp;
    for (i = 0; i < n-1; i++) {
        for (j = 0; j < n-i-1; j++) {
            if (arr[j] < arr[j+1]) {
                // Swap arr[j] and arr[j+1]
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

// Function to print an array
void printArray(int arr[], int n) {
    int i;
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int n, i;

    // Get the size of the array from the user
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];

    // Get the array elements from the user
    printf("Enter elements: ");
    for (i = 0; i < n; i++) {
        scanf("%d ", &arr[i]);
    }

    printf("\nOriginal array: \n");
    printArray(arr, n);

    // Sort in ascending order
    sortAscending(arr, n);
    printf("Array sorted in ascending order: \n");
    printArray(arr, n);

    // Sort in descending order
    sortDescending(arr, n);
    printf("Array sorted in descending order: \n");
    printArray(arr, n);

    return 0;
}