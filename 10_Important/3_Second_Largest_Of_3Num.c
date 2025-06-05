#include <stdio.h>

int main() {
    int a, b, c, secondLargest;

    // Taking input from the user
    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    // Logic to find the second largest number
    if ((a > b && a < c) || (a > c && a < b)) {
        secondLargest = a;
    } 
    else if ((b > a && b < c) || (b > c && b < a)) {
        secondLargest = b;
    } 
    else {
        secondLargest = c;
    }

    // Display the result
    printf("The second largest number is: %d\n", secondLargest);

    return 0;
}
