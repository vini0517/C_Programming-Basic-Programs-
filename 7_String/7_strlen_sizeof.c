//Difference between strlen() and sizeof() function
#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "Hello";
    
    printf("strlen(str) = %lu\n", strlen(str));  // 5 (excludes '\0')
    printf("sizeof(str) = %lu\n", sizeof(str));  // 6 (includes '\0')

    return 0;
}
