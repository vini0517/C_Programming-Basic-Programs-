//Greatest Common Divisor(GCD) of two numbers is a number that divides both of them.

#include <stdio.h>
int hcf(int n1, int n2);
int main() {
    int n1, n2;
    printf("Enter two positive integers: ");
    scanf("%d %d", &n1, &n2);
    printf("G.C.D of %d and %d is %d.", n1, n2, hcf(n1, n2));
    return 0;
}

int hcf(int n1, int n2) {
    if (n2 != 0)
        return hcf(n2, n1 % n2);
    else
        return n1;
}


/*
#include<stdio.h>

// declaring the recursive function
int find_gcd(int , int );

int main()
{
    int a, b, gcd;
    printf("Enter two numbers to find GCD of ");
    scanf("%d %d", &a, &b);
    gcd = find_gcd(a, b);
    printf("GCD of %d and %d is: %d", a, b, gcd);

    return 0;
}

// defining the function
int find_gcd(int x, int y)
{
    if(x > y)
        return find_gcd(x - y, y);  // Recursive call with x - y
    else if(y > x)
        return find_gcd(x, y - x);  // Recursive call with y - x
    else
        return x;  // Base case: x and y are equal, return the value
}
*/

/*
//Not recursive
#include <stdio.h>
int main()
{
 int n1, n2, i, gcd;
 printf("Enter two integers: \n");
 scanf("%d %d", &n1, &n2);
 for(i=1; i <= n1 && i <= n2; ++i)
 {
 if(n1%i==0 && n2%i==0)
 gcd = i;
 }
 printf("G.C.D of %d and %d is %d\n", n1, n2, gcd);
 return 0;
}*/