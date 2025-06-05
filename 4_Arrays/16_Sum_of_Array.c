//Calculate Sum of Array Elements
//Method 1: Withod using function
#include<stdio.h>

int main()
{

    int arr[100], n, i, sum = 0;
    
    printf("Enter array size:");
    scanf("%d",&n);
    
    printf("Enter array elements:");
    for(i = 0; i < n; i++){
          scanf("%d",&arr[i]);
    }
          
    for(i = 0; i < n; i++){
          sum+=arr[i]; 
    }

    printf("Sum of the array = %d\n",sum);
    
    return 0;
}

//Method 2: Using Function
/*
#include <stdio.h>

int getSum(int arr[], int n) {

    int sum = 0;
    for (int i = 0; i < n; i++) {

        sum += arr[i];
    }
    return sum;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    int res = getSum(arr, n);
  
    printf("%d", res);
    return 0;
}
*/