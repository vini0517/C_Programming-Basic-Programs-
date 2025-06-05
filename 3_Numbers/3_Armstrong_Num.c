//Armstrong number is a number that is equal to the sum of cubes of its digits.
//153 = (1*1*1)+(5*5*5)+(3*3*3)  
#include<stdio.h>  
int main()    
{    
int n,rem,sum=0,temp;

printf("enter the number=");    
scanf("%d",&n);    

temp=n; 

while(n>0)    
{    
rem=n%10;    
sum=sum+(rem*rem*rem);    
n=n/10;    
}  

if(temp==sum)    
printf("armstrong  number ");    
else    
printf("not armstrong number");    
return 0;  
}   