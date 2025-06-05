//* is used to access the value stored in the pointer variable
//& is used to store the address of a given variable.
#include <stdio.h>

int main() {
    int num = 10;  // Declare an integer variable
    int *ptr;      // Declare a pointer to an integer

    ptr = &num;    // Assign the address of num to ptr

    // Display values using both variable and pointer
    printf("Value of num: %d\n", num);
    printf("Address of num: %p\n", &num);
    printf("Value of ptr (Address of num): %p\n", ptr);
    printf("Value stored at ptr: %d\n", *ptr); // Dereferencing

    return 0;
}
