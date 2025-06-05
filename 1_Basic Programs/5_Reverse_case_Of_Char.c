#include <stdio.h>
#include <ctype.h> 

int main() {
    char ch;

    printf("Enter a character: ");
    scanf(" %c", &ch); 

    if (islower(ch)) {
        ch = toupper(ch); 
    } else if (isupper(ch)) {
        ch = tolower(ch); 
    }

    printf("Reversed case: %c\n", ch); 

    return 0;
}