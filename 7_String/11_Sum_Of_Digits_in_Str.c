#include <stdio.h>

int main() {
    char str[100];
    int sum = 0;

    printf("Enter a string: ");
    scanf("%s", str);

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] >= '0' && str[i] <= '9') {
            sum += str[i] - '0';  // Convert char to integer
        }
    }

    printf("Sum of digits: %d\n", sum);
    return 0;
}
