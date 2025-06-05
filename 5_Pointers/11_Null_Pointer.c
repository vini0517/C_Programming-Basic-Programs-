//NULL is a macro in C, defined in the <stdio.h> header file, and it represent a null pointer constant. 
//Conceptually, when a pointer has that Null value it is not pointing anywhere.
#include<stdio.h>

int main()
{
    int *ptr = NULL;    // ptr is a NULL pointer

    printf("The value of ptr is: %x ", ptr);
    return 0;
}

/*
//Use Null Pointer to mark end of Pointer Array in C
#include <stdio.h>

int main() {
    // Array of string pointers
    char *words[] = {
        "Apple",
        "Banana",
        "Cherry",
        "Mango",
        NULL  // Marking the end of the array
    };

    char **ptr = words; // Pointer to the array

    // Traverse the array until we reach NULL
    while (*ptr != NULL) {
        printf("%s\n", *ptr);
        ptr++;  // Move to the next string
    }

    return 0;
}
*/

//https://www.programiz.com/c-programming/c-pointer-examples