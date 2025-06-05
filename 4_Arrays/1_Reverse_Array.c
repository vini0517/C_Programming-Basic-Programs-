#include <stdio.h>

int main() {
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n], rev[n];  

    printf("Enter the elements: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int j = 0;  
    for (int i = n - 1; i >= 0; i--) {
        rev[j] = arr[i];
        j++;
    }

    printf("The Reversed array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", rev[i]);
    }

    return 0;
}
