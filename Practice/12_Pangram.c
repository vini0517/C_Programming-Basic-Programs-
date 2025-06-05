//A pangram is a sentence that uses every letter of the alphabet at least once.
#include <stdio.h>
#include <ctype.h>

int isPangram(char str[]) {
    int letters[26] = {0}, i, count = 0;

    for (i = 0; str[i] != '\0'; i++) {
        if (isalpha(str[i])) {
            int index = tolower(str[i]) - 'a';
            if (!letters[index]) {
                letters[index] = 1;
                count++;
            }
        }
    }

    return (count == 26);
}

int main() {
    char str[100];

    printf("Enter a sentence: ");
    scanf("%[^\n]s",str);

    if (isPangram(str))
        printf("Pangram\n");
    else
        printf("Not a Pangram\n");

    return 0;
}
