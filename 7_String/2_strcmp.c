//The strcmp() compares two strings character by character. If the strings are equal, the function returns 0 and -1 otherwise.
//strcmp(a,b) is Case Sensitive.

#include<stdio.h>
#include<string.h>    // for strcmp() function

int main()
{
    char str1[100], str2[100];
    int compare;

    printf("Enter 1st string: ");
    scanf("%[^\n]",str1);
    getchar(); // Clears the newline character left by scanf()

    printf("\nEnter 2nd string: ");
    scanf("%[^\n]",str2);

    compare = strcmp(str1, str2);
    if(compare == 0)
        printf("Both the strings are exactly same.");
    else
        printf("Both the strings are different.");

    return 0;
}

//without strcmp
/*
#include <stdio.h>

// Function to compare two strings manually
int compareStrings(char *str1, char *str2) {
    while (*str1 && *str2) {
        if (*str1 != *str2)  // If characters don't match
            return -1;
        str1++;
        str2++;
    }
    
    // If both reach the end together, they are equal
    return (*str1 == '\0' && *str2 == '\0') ? 0 : -1;
}

int main() {
    char str1[100], str2[100];
    
    printf("Enter first string: ");
    scanf("%s", str1);

    printf("Enter second string: ");
    scanf("%s", str2);

    // Call function to compare
    if (compareStrings(str1, str2) == 0)
        printf("Both strings are exactly the same.\n");
    else
        printf("Both strings are different.\n");

    return 0;
}
*/