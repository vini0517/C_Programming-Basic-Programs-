//checks if a character is a whitespace character. 
//It returns a non-zero value (true) if the character is a whitespace (e.g., space, tab, newline, etc.), and 0 (false) if it is not.

#include <stdio.h>
#include <ctype.h>  // Required for isspace()

int main() {
    char ch;

    // Taking user input
    printf("Enter a character: ");
    scanf("%c", &ch);

    // Check if the character is a whitespace
    if (isspace(ch)) {
        printf("%c is a whitespace character.\n", ch);
    } else {
        printf("%c is not a whitespace character.\n", ch);
    }

    return 0;
}
//input:\t is whitespace