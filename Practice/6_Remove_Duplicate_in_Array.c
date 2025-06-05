//Write a  program that takes a list of numbers as input, finds any duplicates, and prints whether duplicates are present or not. 
//If duplicates exist, remove them from the list and mention that they have been removed.

#include <stdio.h>  

int main ()  
{  
    int arr[20], i, j, k, n, duplicateFound = 0;  
    
    printf("Number of elements in the array: ");  
    scanf("%d", &n);  
    
    printf("\nEnter elements of the array: \n");  
    for (i = 0; i < n; i++){  
        scanf("%d", &arr[i]);  
    }  
    
    // Check for duplicates
    for (i = 0; i < n; i++)  {  
        for (j = i + 1; j < n; j++){  
            if (arr[i] == arr[j]) {  
                duplicateFound = 1;  
                for (k = j; k < n - 1; k++){  
                    arr[k] = arr[k + 1];  
                }  
                n--;  
                j--;       
            }  
        }  
    }  
    
    if (duplicateFound){
        printf("\nDuplicates were found and removed.\n");
    } 
    else{
        printf("\nNo duplicates were found.\n");
    }
    
    printf("\nArray elements after removal of duplicates: ");  
    for (i = 0; i < n; i++){  
        printf("%d ", arr[i]);  
    }  
    return 0;  
}
