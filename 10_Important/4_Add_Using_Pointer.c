//Adding 2 numbers using pointer
#include<stdio.h>
int main(){
    int a,b,*p,*q;
    printf("Enter Values: ");
    scanf("%d %d",&a,&b);
    p=&a;
    q=&b;
    printf("The values are: %d",*p + *q);
    return 0;
}