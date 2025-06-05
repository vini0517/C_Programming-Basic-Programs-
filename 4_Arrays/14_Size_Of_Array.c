#include <stdio.h>
int main()
{
 double arr[] = {1, 2, 3, 4, 5, 6};
 int n;
 n = sizeof(arr) / sizeof(arr[0]);
 printf("Size of the array is: %d\n", n);
 return 0;
}