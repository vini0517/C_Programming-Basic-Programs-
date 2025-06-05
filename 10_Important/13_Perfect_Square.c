#include<stdio.h>

int main()
{
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    for(int i = 1; i <= n; i++)
    {
        if((i*i) == n)
        {
            printf("%d is a perfect square.", n);
            return 0;
        }
    }

    printf("%d is not a perfect square.", n);

    return 0;
}
/*
#include <stdio.h>
#include <math.h>  // Required for sqrt()

int main()
{
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);

    int sqrtValue = sqrt(number);

    if (sqrtValue * sqrtValue == number)
    {
        printf("%d is a perfect square.\n", number);
    }
    else
    {
        printf("%d is not a perfect square.\n", number);
    }

    return 0;
}
*/