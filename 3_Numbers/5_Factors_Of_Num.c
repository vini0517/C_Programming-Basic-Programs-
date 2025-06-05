//Prime Factors of a number
#include<stdio.h>
int main(){
    int n;
    printf("Enter a num:");
    scanf("%d",&n);
    printf("Factors are :");
    for(int i = 1; i <= n/2; i++)
    {
        if(n%i == 0)
            printf("%d\n", i);
    }
    return 0;
}