//This C program dynamically allocates memory for an array, takes user input, 
//computes the sum of elements, and then prints the array before freeing the allocated memory.

#include <stdio.h>
#include <stdlib.h>  //Provides memory allocation functions like malloc() and free().

int main() {
    int n, i, *ptr, sum = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    ptr = (int *) malloc(n * sizeof(int));

    if (ptr == NULL) {
        printf("Error! Memory not allocated\n");
        return 0;
    }

    printf("Enter elements of array:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", ptr + i);
        sum += *(ptr + i);
    }

    printf("The elements of the array are: ");
    for (i = 0; i < n; i++) {
        printf("%d  ", ptr[i]);
    }

    free(ptr); //deallocates the dynamically allocated memory to prevent memory leaks

    return 0;
}
