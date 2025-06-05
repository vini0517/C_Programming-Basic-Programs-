//check if a given character is a control character. 
//Control characters are non-printable characters that control text formatting, such as newline (\n), carriage return (\r), tab (\t), etc.
//Control characters are characters in the ASCII range from 0 to 31 (inclusive), along with the DEL character (ASCII value 127). 

#include <stdio.h>
#include <ctype.h>

int main() {
    char ch='\n';

    //printf("Enter a character: ");
    // scanf("%c", &ch);  // Take a single character as input

    if (iscntrl(ch)) {
        printf("'%c' is a control character.\n", ch);
    } else {
        printf("'%c' is not a control character.\n", ch);
    }

    return 0;
}

//Print ASCII value of All Control characters
/*
#include <stdio.h>
#include <ctype.h>

int main()
{
    int i;

    printf("The ASCII value of all control characters are:\n");
    for (i=0; i<=127; ++i)
    {
        if (iscntrl(i)!=0)
            printf("%d ", i);
    }
    return 0;
}*/
//The ASCII value of all control characters are:
//0 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26 27 28 29 30 31 127