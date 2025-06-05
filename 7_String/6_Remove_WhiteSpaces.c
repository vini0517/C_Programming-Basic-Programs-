#include <stdio.h>

int main() {
    char str[100], result[100];
    int i, j = 0;

    printf("Enter a string: ");
    scanf("%[^\n]", str);  

    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] != ' ') {
            result[j++] = str[i];  // Copy non-space characters
        }
    }
    result[j] = '\0';  // Null-terminate the string

    printf("String after removing whitespaces: %s\n", result);
    
    return 0;
}
