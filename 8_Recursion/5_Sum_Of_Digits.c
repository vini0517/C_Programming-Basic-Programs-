#include<stdio.h>
int SumOfDigits(int n){
    if(n==0){
        return 0;
    }
    return (n%10)+SumOfDigits(n/10);

}
int main(){
    int n;
    printf("Enter a Num:");
    scanf("%d",&n);
    printf("Sum of Digits: %d",SumOfDigits(n));
    return 0;
}