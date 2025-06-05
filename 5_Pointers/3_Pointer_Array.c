//C Program to Access Array Elements Using Pointer
//Method 1
#include <stdio.h>

int main() {
    int data[5];
    int i; // Declare i outside for loops for older compilers

    printf("Enter elements: ");
    for (i = 0; i < 5; ++i)
        scanf("%d", data + i);

    printf("You entered: \n");
    for (i = 0; i < 5; ++i)
        printf("%d\n", *(data + i));

    return 0;
}

//Method 2
/*
#include <stdio.h>

const int MAX = 5;  

int main() {
    int var[] = {10, 20, 30, 40, 50};
    int *ptr[MAX];
    int i;

    for (i = 0; i < MAX; i++) {
        ptr[i] = &var[i]; // Store addresses of array elements
    }

    for (i = 0; i < MAX; i++) {
        printf("Value of var[%d] = %d\n", i, *ptr[i]); // Print values using pointers
    }

    return 0;
}
*/
