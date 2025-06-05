//A pointer variable stores the address of a value. Similarly, a pointer to a pointer stores the address of the pointer variable.
//Pointer to a pointer is executed making use of **.

//int var; is a integer variable which stores value.
//int *ptr; is a pointer variable which stores the address of an integer variable.
//int **pptr; is a pointer to a pointer variable which stores the address of a pointer variable.
#include<stdio.h>

int main()
{
    int var;
    int *ptr;
    int **pptr;

    var = 50;

    // take the address of the variable var
    ptr = &var;

    // taking the address of ptr using address of operator &
    pptr = &ptr;

    // take the value using the pptr
    printf("Value of var = %d", var);
    printf("\nValue available at *ptr = %d", *ptr);
    printf("\nValue available at **pptr = %d", **pptr);

    return 0;
}
