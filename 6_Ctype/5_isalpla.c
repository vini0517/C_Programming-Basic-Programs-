#include <stdio.h>
#include <ctype.h>  // Required for isalpha()

int main() {
    char ch;

    // Taking user input
    printf("Enter a character: ");
    scanf("%c", &ch);

    // Check if the character is alphabetic
    if (isalpha(ch)) {
        printf("%c is an alphabetic character.\n", ch);
    } else {
        printf("%c is not an alphabetic character.\n", ch);
    }

    return 0;
}
