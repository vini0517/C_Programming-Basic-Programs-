#include <stdio.h>
#include <string.h>

int main() {
    char str[1000], rev[1000];
    int i, j;

    printf("Enter a string: ");
    scanf(" %[^\n]", str);  

    printf("\nString Before Reverse: %s", str);

    j = strlen(str);

    // Reverse the string properly
    for (i = 0; i < j; i++) {
        rev[i] = str[j - i - 1];  
    }
    printf("\nString After Reverse: %s\n", rev);
    
    return 0;
}
