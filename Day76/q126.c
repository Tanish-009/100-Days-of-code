#include <stdio.h>

int main()
{
    FILE *fp;
    char filename[100];
    char ch;

    printf("Enter the filename: ");
    scanf("%s", filename);

    // Open the file in read mode
    fp = fopen(filename, "r");

    // Check whether the file exists
    if (fp == NULL)
    {
        printf("Error: File does not exist or cannot be opened.\n");
    }
    else
    {
        printf("\nFile contents:\n");

        // Read and display the file contents
        while ((ch = fgetc(fp)) != EOF)
        {
            putchar(ch);
        }

        fclose(fp);
    }

    return 0;
}