//Method 1:
#include <stdio.h>
int main() {
    char c;
    int lowercase_vowel, uppercase_vowel;
    printf("Enter an alphabet: ");
    scanf("%c", &c);

    // evaluates to 1 if variable c is a lowercase vowel
    lowercase_vowel = (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');

    // evaluates to 1 if variable c is a uppercase vowel
    uppercase_vowel = (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');

    // evaluates to 1 (true) if c is a vowel
    if (lowercase_vowel || uppercase_vowel)
        printf("%c is a vowel.", c);
    else
        printf("%c is a consonant.", c);
    return 0;
}

/*
//Method 2:Switch case

#include<stdio.h>

int main()
{
    char ch;
    printf("Input a Character :  ");
    scanf("%c", &ch);

    switch(ch)
    {
        case 'a':
        case 'A':
        case 'e':
        case 'E':
        case 'i':
        case 'I':
        case 'o':
        case 'O':
        case 'u':
        case 'U':
            printf("%c is a vowel.", ch);
            break;
        default:
            printf("%c is not a vowel.", ch);
    }
    return 0;
}
*/

/*
//Method 3: String
#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    printf("Enter a string: ");
    gets(str);

    for (int i = 0; i < strlen(str); i++) {
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' ||
            str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U') {
            printf("%c is a vowel\n", str[i]);
        } else if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z')) {
            printf("%c is a consonant\n", str[i]);
        }
    }
    return 0;
}
*/
/*
//Method 4:count no.of vowels/consonants

#include <stdio.h>
#include <string.h>
#define MAX_SIZE 100 // Maximum string size
int main()
{
 char str[MAX_SIZE];
 int i, len, vowel, consonant;
 printf("Enter any string: ");
 gets(str);
 vowel = 0;
 consonant = 0;
 len = strlen(str);
 for(i=0; i<len; i++)
 {
 if((str[i]>='a' && str[i]<='z') || (str[i]>='A' && str[i]<='Z'))
 {

 if(str[i] =='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u' ||
 str[i] =='A' || str[i]=='E' || str[i]=='I' || str[i]=='O' || str[i]=='U' )
 vowel++;
 else
 consonant++;
 }
 }
 printf("Total number of vowel = %d\n", vowel);
 printf("Total number of consonant = %d\n", consonant);
 return 0;
}
*/
