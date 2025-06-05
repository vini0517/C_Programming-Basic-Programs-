#include<stdio.h>
int main(){
    int n,count=0;
    printf("Enter a Num: ");
    scanf("%d",&n);

    if(n<0 || n==0 || n==1){
        printf("%d is not prime.",n);
    }
    else {
        for (int i = 1; i <= n; i++) {
            if (n % i == 0)
                count++;
        }
        if (count > 2)
            printf("%d is not prime\n", n);
        else
            printf("%d is prime", n);
    }

    return 0;

}