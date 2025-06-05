#include <stdio.h>
#include <string.h>

void toggleCase(char str[]) {
    for(int i = 0; str[i] != '\0'; i++) {
        if(str[i] >= 'A' && str[i] <= 'Z') {
            str[i] = str[i] + 32; // Convert uppercase to lowercase
        }
        else if(str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - 32; // Convert lowercase to uppercase
        }
    }
}

int main() {
    char str[100];

    printf("Enter a string: ");
    scanf("%[^\n]s", str); 

    toggleCase(str);

    printf("Toggled case string: %s\n", str);

    return 0;
}
