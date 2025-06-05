#include <stdio.h>
#include <ctype.h>  // Required for toupper()

int main() {
    char ch;

    // Taking user input
    printf("Enter a character: ");
    scanf("%c", &ch);

    // Converting to uppercase
    char upper = toupper(ch);

    printf("Uppercase: %c\n", upper);

    return 0;
}
/*
Program to convert lower case to upper case

#include<stdio.h>
#include<string.h>
int main()
{
char str[25];
int i;
printf("Enter the string:\n");
scanf("%s",str);
for(i=0;i<=strlen(str);i++)
{
if(str[i]>=97&&str[i]<=122)
str[i]=str[i]-32;
}
printf("\nUpper Case String is: %s\n",str);
return 0;
}
*/
