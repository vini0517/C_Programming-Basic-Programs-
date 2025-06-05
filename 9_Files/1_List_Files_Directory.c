//dirent.h header file contains variables and functions related to directory streams.

#include <stdio.h>
#include <dirent.h>

int main(void) {
    DIR *d;
    struct dirent *dir;

    d = opendir(".");
    if (d == NULL) {
        printf("Could not open directory.\n");
        return 1; // Return error code
    }

    printf("Files in the directory:\n");
    while ((dir = readdir(d)) != NULL) {
        printf("%s\n", dir->d_name);
    }

    closedir(d);
    return 0;
}
