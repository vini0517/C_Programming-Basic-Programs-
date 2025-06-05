//range of the ASCII values of the upper-case alphabets which is 65 to 90.

#include <stdio.h>
#include <ctype.h>  // Required for isupper()

int main() {
    char ch;

    // Taking user input
    printf("Enter a character: ");
    scanf("%c", &ch);

    // Checking if the character is uppercase
    if (isupper(ch)) {
        printf("'%c' is an uppercase letter.\n", ch);
    } else {
        printf("'%c' is NOT an uppercase letter.\n", ch);
    }

    return 0;
}
