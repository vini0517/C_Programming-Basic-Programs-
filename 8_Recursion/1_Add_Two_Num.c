#include <stdio.h>

// Function to add two numbers using recursion
int addNumbers(int a, int b) {
    if (b == 0) {
        return a;  // Base case: if b is 0, return a
    } else {
        return addNumbers(a + 1, b - 1);  // Recursive case: increment a, decrement b
    }
}

int main() {
    int num1, num2;

    // Input two numbers
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    // Call the recursive function to add the numbers
    int result = addNumbers(num1, num2);

    // Output the result
    printf("The sum of %d and %d is: %d\n", num1, num2, result);

    return 0;
}
