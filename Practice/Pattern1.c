/*
1
12
1 3
1  4
1   5
1    6
1     7
12345678
*/

#include <stdio.h>

int main() {
    int i, j;
    
    for (i = 1; i <= 7; i++) {
        printf("1"); // Print the first '1'
        
        for (j = 1; j < i; j++) {
            printf(" "); // Print spaces
        }
        
        printf("%d\n", i + 1); // Print the last number
    }

    // Print last row: 12345678
    for (i = 1; i <= 8; i++) {
        printf("%d", i);
    }
    
    return 0;
}
