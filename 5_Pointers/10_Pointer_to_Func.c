//A function pointer in C is a pointer that points to the address of a function. It allows us to call a function dynamically at runtime.
//Example 1:

#include <stdio.h>

// Function to be called using a function pointer
void displayMessage() {
    printf("Hello! This message is displayed using a function pointer.\n");
}

int main() {
    // Declare a function pointer
    void (*funcPtr)();

    // Assign address of displayMessage() to function pointer
    funcPtr = displayMessage;

    // Call function using pointer
    funcPtr();

    return 0;
}

/*Example 3:

#include <stdio.h>

void addOne(int* ptr) {
  (*ptr)++; // adding 1 to *ptr
}

int main()
{
  int* p, i = 10;
  p = &i;
  addOne(p);

  printf("%d", *p); // 11
  return 0;
}*/


/*
//Example 3:
#include <stdio.h>

// Function definition with corrected return type
void func(int a, int b) {
    printf("a = %d\n", a);
    printf("b = %d\n", b);
}

int main() {
    // Function pointer declaration
    void (*fptr)(int, int);

    // Assign address of function to pointer
    fptr = func;

    // Calling function directly
    func(2, 3);

    // Calling function using pointer
    fptr(2, 3);

    return 0;
}
*/