#include <stdio.h>
#include <ctype.h>

int main()
{
    FILE *fp;
    char filename[100];
    char ch;
    int vowels = 0, consonants = 0;

    // Accept filename from user
    printf("Enter the filename: ");
    scanf("%99s", filename);

    // Open file in read mode
    fp = fopen(filename, "r");

    if (fp == NULL)
    {
        printf("Error: Unable to open the file.\n");
        return 1;
    }

    // Read the file character by character
    while ((ch = fgetc(fp)) != EOF)
    {
        ch = tolower((unsigned char)ch);

        if (ch >= 'a' && ch <= 'z')
        {
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
            {
                vowels++;
            }
            else
            {
                consonants++;
            }
        }
    }

    // Display the results
    printf("\nTotal vowels = %d", vowels);
    printf("\nTotal consonants = %d\n", consonants);

    // Close the file
    fclose(fp);

    return 0;
}