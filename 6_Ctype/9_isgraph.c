//check if a character is a graphical character. 
//A graphical character is any character that has a visible representation, i.e., any printable character except for space. 
//This includes digits, letters, and punctuation symbols.
#include <stdio.h>
#include <ctype.h>  // Required for isgraph()

int main() {
    char ch;

    // Taking user input
    printf("Enter a character: ");
    scanf("%c", &ch);

    // Check if the character is a graphical character
    if (isgraph(ch)) {
        printf("%c is a graphical character.\n", ch);
    } else {
        printf("%c is not a graphical character.\n", ch);
    }

    return 0;
}
