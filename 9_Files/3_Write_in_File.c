#include <stdio.h>

int main() {
    FILE *fp;
    char data[100];

    // Open file in write mode
    fp = fopen("MyFile.txt", "w");

    // Check if the file is created successfully
    if (fp == NULL) {
        printf("Error opening file!\n");
        return 1; // Return an error code
    }

    printf("Enter data to write in file: ");
    fgets(data, sizeof(data), stdin); // Read input from user

    // Write data to file
    fputs(data, fp);

    // Close the file
    fclose(fp);

    printf("Data written successfully!\n");

    return 0;
}

/*
#include<stdio.h>
#include<conio.h>

void main()
{
    FILE *fptr;
    char name[20];
    int age;
    float salary;

    fptr = fopen("emp.txt", "w");

    if (fptr == NULL)
    {
        printf("File does not exist.\n");
        return;
    }
    printf("Enter the name:\n");
    scanf("%s", name);
    fprintf(fptr, "Name  = %s\n", name);

    printf("Enter the age:\n");
    scanf("%d", &age);
    fprintf(fptr, "Age  = %d\n", age);

    printf("Enter the salary:\n");
    scanf("%f", &salary);
    fprintf(fptr, "Salary  = %.2f\n", salary);

    fclose(fptr);
}
*/