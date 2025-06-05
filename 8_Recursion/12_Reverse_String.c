#include<stdio.h>

// Function to reverse the string recursively
void reverseString(char str[], int i) {
    if (str[i] == '\0') {
        return;
    }
    reverseString(str, i + 1);
    printf("%c", str[i]);
}

int main() {
    char str[100];
    
    printf("Enter a string: ");
    scanf("%s", str);  
    
    printf("Reversed string: ");
    reverseString(str, 0);  // Call the recursive function starting from index 0
    
    return 0;
}
