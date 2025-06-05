//same type
#include <stdio.h>

int main()
{
    int *ptrA,*ptrB;

    ptrA = (int *)1;
    ptrB = (int *)2;
    
    if(ptrB > ptrA)
        printf("PtrB is greater than ptrA");

return(0);
}

//Different type
/*
#include <stdio.h>

int main()
{
    int *ptrA;
    float *ptrB;
    
    ptrA = (int *)1000;
    ptrB = (float *)2000;
    
    if(ptrB > ptrA)
       printf("PtrB is greater than ptrA");
    
    return(0);
}
*/