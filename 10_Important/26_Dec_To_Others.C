//Given a decimal number as input, how can you convert it into binary, octal, and hexadecimal formats

#include<stdio.h>
int main(){
    int n;
    printf("Enter a value: ");
    scanf("%d",&n);
    printf("Decimal: %d\n",n);

    printf("Binary: ");
    for (int i = 31; i >=0; i--)
    {
        printf("%d",(n>>i)&1);
        if (i % 4 == 0) printf(" "); // Space every 4 bits for readability
    }
    printf("\n");

    printf("Octal: %o\n",n);
    printf("Hexadecimal: %x",n);
    return 0;
}