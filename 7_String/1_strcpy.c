//The strcpy() function copies the string pointed by source (including the null character) to the destination.
//The strcpy() function also returns the copied string.
//strcpy(destination, source)

#include <stdio.h>
#include <string.h>  // For strcpy()

int main() {
    char source[100], destination[100];  

    // Take input for the source string using scanf
    printf("Enter a string: ");
    scanf("%99[^\n]", source);  // Read a string with spaces, up to 99 characters

    // Copy the content of source into destination
    strcpy(destination, source);

    // Print the copied string
    printf("Source string: %s\n", source);
    printf("Destination string: %s\n", destination);

    return 0;
}
//without strcpy
/*
#include <stdio.h>
int main() {
    char s1[100], s2[100], i;
    printf("Enter string s1: ");
    fgets(s1, sizeof(s1), stdin);

    for (i = 0; s1[i] != '\0'; ++i) {
        s2[i] = s1[i];
    }

    s2[i] = '\0';
    printf("String s2: %s", s2);
    return 0;
}
*/
