#include<stdio.h>
void main()
{
   int n;
   long int fact = 1;
   printf("Enter the number: ");
   scanf("%d" , &n);
   for(int i = 1; i <= n; i++)
   {
       fact = fact * i;
   }
   printf("Factorial of %d is %ld", n , fact);
   
}