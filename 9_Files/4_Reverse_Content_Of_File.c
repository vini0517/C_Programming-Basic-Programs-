#include <stdio.h>

void reverseFileContent(const char *filename) {
    FILE *fp = fopen(filename, "r");
    
    if (fp == NULL) {
        printf("Error opening file!\n");
        return;
    }

    // Move file pointer to the end of the file
    fseek(fp, 0, SEEK_END);
    long fileSize = ftell(fp);

    // Read and print the file content in reverse order
    printf("Reversed File Content:\n");
    for (long i = fileSize - 1; i >= 0; i--) {
        fseek(fp, i, SEEK_SET);
        printf("%c", fgetc(fp));
    }

    fclose(fp);
}

int main() {
    char filename[100];

    printf("Enter file name: ");
    scanf("%s", filename);

    reverseFileContent(filename);

    return 0;
}
