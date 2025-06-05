 //check if a character is a valid hexadecimal digit. 
 //A hexadecimal digit is any of the characters 0-9 or a-f (or A-F), which represent the numbers 0 to 15.

#include <stdio.h>
#include <ctype.h>  // for isxdigit()

int main() {
    char ch;

    printf("Enter a character: ");
    scanf("%c", &ch);

    if (isxdigit(ch)) {
        printf("'%c' is a valid hexadecimal digit.\n", ch);
    } else {
        printf("'%c' is not a valid hexadecimal digit.\n", ch);
    }

    return 0;
}
