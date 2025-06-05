#include<stdio.h>

int main()
{
	int n, sum = 0, rem;

    printf("Enter the number you want to add digits of:  ");
    scanf("%d", &n);

	while(n != 0){
        	rem = n%10;
        	sum += rem;
        	n = n/10;
    }
    printf("Sum of Digits is %d",sum);
    return 0;
}