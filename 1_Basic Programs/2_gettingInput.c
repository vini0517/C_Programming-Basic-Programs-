#include <stdio.h>

int main() {
    int a;
    char b;
    float c;
    char d[10];

    printf("Enter an Integer: ");
    scanf("%d", &a);

    printf("\nEnter a Character: ");
    scanf(" %c", &b);  // Use &b to pass the address of b

    printf("\nEnter a Float: ");
    scanf("%f", &c);  

    printf("\nEnter a String: ");
    scanf("%s", d);  

    printf("\nYou entered:\n");
    printf("Integer: %d\n", a);
    printf("Character: %c\n", b);
    printf("Float: %.2f\n", c);  
    printf("String: %s\n", d);

    return 0;
}
