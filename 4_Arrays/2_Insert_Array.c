//Program to insert an element in an Array in C

#include <stdio.h>

int main() {
    int arr[100], n, element, pos;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter element to insert: ");
    scanf("%d", &element);
    printf("Enter position: ");
    scanf("%d", &pos);

    if(pos<=0||pos>n+1){
        printf("Invalid Position");
    }
    else{
    for (int i = n; i >= pos; i--) {
        arr[i] = arr[i - 1];
    }
    arr[pos - 1] = element;
    n++;

    printf("Updated array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
}

    return 0;
}


//Insert at start
/*
#include <stdio.h>

int main() {
    int arr[100], n, i, element;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements: ", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter element to insert at start: ");
    scanf("%d", &element);

    for (i = n; i > 0; i--) {
        arr[i] = arr[i - 1];  
    }
    arr[0] = element;
    n++;

    printf("Updated array: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
*/


//Insert at end
/*
#include <stdio.h>

int main() {
    int arr[100], n, i, element;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements: ", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter element to insert at end: ");
    scanf("%d", &element);

    arr[n] = element;  // Insert element at the last index
    n++;  // Increase array size

    printf("Updated array: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}

*/
