//write a proram tha takes binary representation of an unsigned integer and returns the number of '1' bits it has (also known as Hamming Weight)
//Input: n = 11 ; Output: 3
//Explanation: The input binary string 1011 has a total of three set bits.

#include<stdio.h>
int main(){
    int n,count=0;
    printf("Enter a num:");
    scanf("%d",&n);

     while(n>0){
        if(n%2==1){
        count+=1;
        }
        n/=2;
    }
    printf("Hamming Weight: %d",count);
    
}