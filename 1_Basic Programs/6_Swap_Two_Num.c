
//Method 1: using temp var
#include<stdio.h>

int main()
{
    int x = 10, y = 15, temp;
    printf("Before Swap:\n");
    printf("x = %d and y = %d", x, y);

    temp = x;
    x = y;
    y = temp;
    printf("\nAfter Swap:\n");
    printf("x = %d and y = %d", x, y);
    return 0;
}


/*
//Method 2: using add & sub
#include <stdio.h>

int main() {
  double a, b;
  printf("Enter a: ");
  scanf("%d", &a);
  printf("Enter b: ");
  scanf("%d", &b);

  // swapping
  a = a - b;   
  b = a + b;
  a = b - a;

  printf("After swapping, a = %d\n", a);
  printf("After swapping, b = %.d", b);

  return 0;
}
*/

/*
//using Bitwise Operator
#include<stdio.h>

int main()
{
    int x = 6, y = 4;
    printf("Before Swap:\n");
    printf("x = %d and y = %d", x, y);

    x = x^y;
    y = x^y;
    x = x^y;

    printf("After Swap:\n");
    printf("x = %d and y = %d", x, y);
    return 0;
}
*/
/*
//Using Multiple & Division
#include<stdio.h>

int main()
{
    int x = 6, y = 4;
    printf("Before Swap:\n");
    printf("x = %d and y = %d", x, y);

    x = x*y;
    y = x/y;
    x = x/y;

    printf("\nAfter Swap:\n");
    printf("x = %d and y = %d", x, y);
    return 0;

}
*/
