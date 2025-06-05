#include <stdio.h>

int main() {
    char str[100];
    int i, count = 0;

    // Taking string input
    printf("Enter a string: ");
    scanf("%[^\n]", str);  // Reads the entire line including spaces

    // Loop through the string to count vowels
    for (i = 0; str[i] != '\0'; i++) {
        char ch = str[i];
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
            ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
            count++;
        }
    }

    // Print the vowel count
    printf("Number of vowels in the string: %d\n", count);
    
    return 0;
}
