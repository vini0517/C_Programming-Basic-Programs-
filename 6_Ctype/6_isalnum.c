#include <stdio.h>
#include <ctype.h>  // Required for isalnum()

int main() {
    char ch;

    // Taking user input
    printf("Enter a character: ");
    scanf("%c", &ch);

    // Check if the character is alphanumeric
    if (isalnum(ch)) {
        printf("%c is an alphanumeric character.\n", ch);
    } else {
        printf("%c is not an alphanumeric character.\n", ch);
    }

    return 0;
}
