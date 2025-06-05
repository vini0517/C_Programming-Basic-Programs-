//Concatenate Strings usig pointers
#include <stdio.h>

void concatenateStrings(char *str1, char *str2) {
    // Move the pointer to the end of the first string
    while (*str1) {
        str1++;
    }

    // Copy characters from the second string to the first string
    while (*str2) {
        *str1 = *str2;
        str1++;
        str2++;
    }

    // Null terminate the concatenated string
    *str1 = '\0';
}

int main() {
    char str1[100], str2[50];

    printf("Enter first string: ");
    gets(str1);  // Using gets (unsafe, but simple for demonstration)

    printf("Enter second string: ");
    gets(str2);  // Using gets (unsafe, but simple for demonstration)

    concatenateStrings(str1, str2);

    printf("Concatenated string: %s\n", str1);

    return 0;
}
