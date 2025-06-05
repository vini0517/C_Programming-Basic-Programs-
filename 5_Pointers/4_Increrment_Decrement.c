//Accessing array elements(Traversing array) by incrementing a Pointer
#include <stdio.h>

int main() {
    int data[] = {10, 20, 30, 40, 50};
    int *ptr = data;  // Pointer to the first element of the array

    // Traversing array by incrementing the pointer
    printf("Array elements: \n");
    for (int i = 0; i < 5; i++) {
        printf("%d\n", *ptr);  // Dereference the pointer to get the value
        ptr++;  // Increment the pointer to point to the next element
    }

    return 0;
}

//Traversing array elements by decrementing a Pointer
/*
#include <stdio.h>

int main() {
    int data[] = {10, 20, 30, 40, 50};
    int *ptr = data + 4;  // Pointer pointing to the last element of the array

    // Traversing array by decrementing the pointer
    printf("Array elements (traversing backward): \n");
    for (int i = 0; i < 5; i++) {
        printf("%d\n", *ptr);  // Dereference the pointer to get the value
        ptr--;  // Decrement the pointer to point to the previous element
    }

    return 0;
}
*/