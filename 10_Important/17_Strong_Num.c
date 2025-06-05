//A number can be said as a strong number when the sum of the factorial of the individual digits is equal to the number.
//145 → (1! + 4! + 5!) = 1 + 24 + 120 = 145 

#include<stdio.h>
int main(){
    int n,rem,fact,sum=0,temp;
    printf("Enter a num:");
    scanf("%d",&n);
    temp=n;

    while(n>0){
        rem=n%10;
        fact=1;
        for(int i=1;i<=rem;i++){
            fact*=i;
        }
        sum+=fact;
        n/=10;
    }
    if(sum==temp){
        printf("%d is Strong Num",temp);
    }
    else{
        printf("%d is not Strong Num",temp);
    }

    return 0;
}