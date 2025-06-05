//freq: no. of times an element is repeated
#include <stdio.h>

int main() {
    int n, a[10];
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter elements: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    int visited[10] = {0}; // Initialize all to 0 (unvisited)

    printf("Frequency count:\n");
    for (int i = 0; i < n; i++) {
        if (visited[i] == 1) continue; // Skip already counted elements

        int count = 1;
        for (int j = i + 1; j < n; j++) {
            if (a[i] == a[j]) {
                count++;
                visited[j] = 1; // Mark element as counted
            }
        }
        printf("%d %d\n", a[i], count);
    }

    return 0;
}
