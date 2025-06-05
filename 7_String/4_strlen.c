#include <stdio.h>
#include <string.h>
int main()
{
    char a[20]="Program";
    char b[20]={'P','r','o','g','r','a','m','\0'};

    // using the %zu format specifier to print size_t
    //z is a length modifier and u stand for unsigned type
    printf("Length of string a = %zu \n",strlen(a));
    printf("Length of string b = %zu \n",strlen(b));

    return 0;
}

//without strlen
/*
#include <stdio.h>

int main() {
    char str[100];
    int length = 0;

    printf("Enter a string: ");
    scanf("%[^\n]", str);  // Reads input including spaces

    while (str[length] != '\0') {
        length++;  // Count each character until '\0'
    }

    printf("Length of the string: %d\n", length);

    return 0;
}
*/