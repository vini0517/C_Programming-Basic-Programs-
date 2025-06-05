//C Program to copy content of one File into another File

#include <stdio.h>

int main()
{
    FILE *sourceFile, *destFile;
    char ch;

    // Open source file in read mode
    sourceFile = fopen("source.txt", "r");
    if (sourceFile == NULL)
    {
        printf("Error: Cannot open source file.\n");
        return 1;
    }

    // Open destination file in write mode
    destFile = fopen("destination.txt", "w");
    if (destFile == NULL)
    {
        printf("Error: Cannot open destination file.\n");
        fclose(sourceFile);
        return 1;
    }

    // Copy content from source to destination
    while ((ch = fgetc(sourceFile)) != EOF)
    {
        fputc(ch, destFile);
    }

    printf("File copied successfully.\n");

    // Close both files
    fclose(sourceFile);
    fclose(destFile);

    return 0;
}
