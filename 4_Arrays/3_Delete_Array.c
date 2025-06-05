//Delete an element from array

#include <stdio.h>

int main() {
    int arr[100], n, i, element, pos = -1;

    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter %d elements: ", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter element to delete: ");
    scanf("%d", &element);

    // Find position of the element to delete
    for (i = 0; i < n; i++) {
        if (arr[i] == element) {
            pos = i;  // Store the position of the element
            break;
        }
    }
    // If element not found
    if (pos == -1) {
        printf("Element not found!\n");
        return 1;
    }
    // Shift elements to the left to overwrite the deleted element
    for (i = pos; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }
    n--; // Reduce the array size

    printf("Updated array: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
