//Reverse a string using pointer
#include <stdio.h>
#include <string.h>

// Function to reverse a string using pointers
void reverseString(char *str) {
    char *begin = str, *end = str + strlen(str) - 1, temp;

    while (begin < end) {
        temp = *begin;
        *begin++ = *end;
        *end-- = temp;
    }
}

int main() {
    char str[100] = "GeeksforGeeks";

    reverseString(str);

    printf("Reversed string: %s\n", str);
    return 0;
}
