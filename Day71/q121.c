#include <stdio.h>

int main() {
    FILE *fp;
    char name[100];
    int age;

    printf("Enter your name: ");
    scanf(" %[^\n]", name);

    printf("Enter your age: ");
    scanf("%d", &age);

    fp = fopen("info.txt", "w");

    if (fp == NULL) {
        printf("Error opening the file.");
        return 1;
    }

    fprintf(fp, "Name: %s\nAge: %d\n", name, age);

    fclose(fp);

    printf("Data saved successfully to info.txt.");

    return 0;
}