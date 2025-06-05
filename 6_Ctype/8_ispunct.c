//checks if a character is a punctuation character. 
//It returns a non-zero value (true) if the character is a punctuation character (e.g., !, ?, #, etc.), and 0 (false) if it is not.
#include <stdio.h>
#include <ctype.h>  // Required for ispunct()

int main() {
    char ch;

    // Taking user input
    printf("Enter a character: ");
    scanf("%c", &ch);

    // Check if the character is a punctuation
    if (ispunct(ch)) {
        printf("%c is a punctuation character.\n", ch);
    } else {
        printf("%c is not a punctuation character.\n", ch);
    }

    return 0;
}
