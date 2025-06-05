//Range of ASCII values of lowercase character is 97 to 122

#include <stdio.h>
#include <ctype.h>  // Required for islower()

int main() {
    char ch;

    printf("Enter a character: ");
    scanf("%c", &ch);

    // Checking if the character is lowercase
    if (islower(ch)) {
        printf("'%c' is a lowercase letter.\n", ch);
    } else {
        printf("'%c' is NOT a lowercase letter.\n", ch);
    }

    return 0;
}
