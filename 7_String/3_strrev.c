//simple
#include <stdio.h>
#include <string.h>

int main() {
    char str[100];

    printf("Enter a string: ");
    scanf("%s", str);  // Reads input string

    printf("Reversed string: %s\n", strrev(str));  // Reverses and prints

    return 0;
}

//without strrev function
/*
#include <stdio.h>
#include <string.h>

// Function to reverse a string manually
void reverseString(char *str) {
    int length = strlen(str);
    int i;
    char temp;

    for (i = 0; i < length / 2; i++) {
        temp = str[i];
        str[i] = str[length - i - 1];
        str[length - i - 1] = temp;
    }
}

int main() {
    char str[100];

    printf("Enter a string: ");
    scanf("%s", str);

    reverseString(str);  // Reverse the string manually

    printf("Reversed string: %s\n", str);

    return 0;
}
*/
