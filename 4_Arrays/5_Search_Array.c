//Search for an element in an array

#include <stdio.h>

int main() {
    int arr[100], n, i, element, found = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements: ", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter element to search: ");
    scanf("%d", &element);

    // Search for the element in the array
    for (i = 0; i < n; i++) {
        if (arr[i] == element) {
            printf("Element found at position: %d\n", i);
            found = 1;
            break;  // Exit loop once element is found
        }
    }

    if (!found) {
        printf("Element not found in the array.\n");
    }

    return 0;
}
