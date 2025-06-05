//char *strcat(char *destination, const char *source)
//When we use strcat(), the size of the destination string should be large enough to store the resultant string. 
//If not, we will get the segmentation fault error.

#include <stdio.h>
#include <string.h>
int main() {
   char str1[100] = "This is ", str2[] = "programiz.com";

   // concatenates str1 and str2
   // the resultant string is stored in str1.
   strcat(str1, str2);

   puts(str1);
   puts(str2);

   return 0;
}
/*
#include <stdio.h>
int main()
{
    char str1[50], str2[50];
    int i, j;

    printf("\nEnter first string: ");
    scanf("%s", str1);
    printf("\nEnter second string: ");
    scanf("%s", str2);

    // Find the end of the first string
    for(i = 0; str1[i] != '\0'; ++i);

    // Append the second string to the first
    for(j = 0; str2[j] != '\0'; ++j, ++i) {
        str1[i] = str2[j];
    }
    
    // Null terminate the string
    str1[i] = '\0';

    printf("\nOutput: %s\n", str1);

    return 0;
}
*/