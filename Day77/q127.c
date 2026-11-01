#include <stdio.h>
#include <ctype.h>

int main()
{
    FILE *fp1, *fp2;
    char ch;

    // Open input file in read mode
    fp1 = fopen("input.txt", "r");

    if (fp1 == NULL)
    {
        printf("Error: Cannot open input.txt\n");
        return 1;
    }

    // Open output file in write mode
    fp2 = fopen("output.txt", "w");

    if (fp2 == NULL)
    {
        printf("Error: Cannot create output.txt\n");
        fclose(fp1);
        return 1;
    }

    // Read, convert and write characters
    while ((ch = fgetc(fp1)) != EOF)
    {
        ch = toupper((unsigned char)ch);
        fputc(ch, fp2);
    }

    printf("File converted successfully!");

    // Close both files
    fclose(fp1);
    fclose(fp2);

    return 0;
}