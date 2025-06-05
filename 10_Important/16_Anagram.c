#include<stdio.h>
#include<string.h>

void sortString(char str[], int len) {
    char temp;
    for(int i=0; i<len-1; i++) {
        for(int j=i+1; j<len; j++) {
            if(str[i] > str[j]) {
                temp = str[i];
                str[i] = str[j];
                str[j] = temp;
            }
        }
    }
}

int main() {
    char str1[100], str2[100];
    int l1, l2;

    printf("Enter string1: ");
    scanf("%[^\n]s", str1);
    getchar();  // To clear newline from buffer
    printf("Enter string2: ");
    scanf("%[^\n]s", str2);

    l1 = strlen(str1);
    l2 = strlen(str2);

    if(l1 != l2) {
        printf("It is not an anagram.\n");
        return 0;
    }

    // Sorting both strings
    sortString(str1, l1);
    sortString(str2, l2);

    // Comparing sorted strings
    if(strcmp(str1, str2) == 0) {
        printf("Anagram.\n");
    } else {
        printf("Not Anagram.\n");
    }

    return 0;
}
