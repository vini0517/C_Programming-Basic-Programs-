#include <stdio.h>
#include <ctype.h>  // Required for tolower()

int main() {
    char ch;

    // Taking user input
    printf("Enter a character: ");
    scanf("%c", &ch);

    // Converting to lowercase
    char lower = tolower(ch);

    printf("Lowercase: %c\n", lower);

    return 0;
}
/*
Program to convert upper case to lower case

#include<stdio.h>
#include<string.h>
int main()
{
char str[25];
int i;
printf("Enter the string: \n");
scanf("%s",str);
for(i=0;i<=strlen(str);i++)
{
if(str[i]>=65&&str[i]<=90)
str[i]=str[i]+32;
}
printf("\nLower Case String is: %s\n",str);
return 0;
}*/
