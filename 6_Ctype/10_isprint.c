//check if a character is a printable character. 
//A printable character is any character that can be displayed on the screen, including letters, digits, punctuation marks, and the space character. 
//It excludes control characters (like newline, tab, etc.).....\n,\t

#include <stdio.h>
#include <ctype.h>  // Required for isprint()

int main() {
    char ch;

    // Taking user input
    printf("Enter a character: ");
    scanf("%c", &ch);

    // Check if the character is printable
    if (isprint(ch)) {
        printf("%c is a printable character.\n", ch);
    } else {
        printf("%c is not a printable character.\n", ch);
    }

    return 0;
}

//C Program to List all Printable Characters Using isprint() function.
/*
#include <ctype.h>
#include <stdio.h>
int main()
{
   int c;
   for(c = 1; c <= 127; ++c)
   	if (isprint(c)!= 0)
             printf("%c ", c);
   return 0;
}
*/

