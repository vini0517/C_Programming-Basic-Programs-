#include<stdio.h>

int main() {
    int n, sum = 0, arr[100];
    float avg;

    printf("Enter Number of elements: ");
    scanf("%d", &n);

    printf("Enter %d Array Elements: ", n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);  
    }

    for(int i = 0; i < n; i++) {
        sum += arr[i];
    }

    avg = (float)sum / n;  //typecasting
    printf("Average of array elements: %.2f\n", avg);  

    return 0;
}
