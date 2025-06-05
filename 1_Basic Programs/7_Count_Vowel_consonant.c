#include <stdio.h>
#include <ctype.h>

int main() {
    char str[100];
    int vowels = 0, consonants = 0;
    
    printf("Enter a string: ");
    scanf("%[^\n]s",str);
    //fgets(str, sizeof(str), stdin); //to avoid buffer issues
    
    for (int i = 0; str[i] != '\0'; i++) {
        char ch = tolower(str[i]);
        if (ch >= 'a' && ch <= 'z') {
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
                vowels++;
            else
                consonants++;
        }
    }
    
    printf("Vowels: %d\nConsonants: %d\n", vowels, consonants);
    return 0;
}
