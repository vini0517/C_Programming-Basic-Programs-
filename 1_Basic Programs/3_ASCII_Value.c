#include<stdio.h>

int main()
{
    char c;
    printf("Enter a character : ");
    scanf("%c" , &c);
    printf("ASCII value of %c = %d",c,c);

    return 0;
}
/*
// C program to print ASCII Value of Character using
// typecasting into integer
#include <stdio.h>

int main() {

    char ch = 'A';

    // Find the ASCII value of a character using typecasting
    int asciiValue = (int)ch;//typecasting

    printf("ASCII value of %c is %d\n", ch, asciiValue);
    return 0;
}*/