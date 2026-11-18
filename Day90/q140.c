#include <stdio.h>

enum Gender
{
    MALE = 1,
    FEMALE,
    OTHER
};

struct Person
{
    char name[50];
    enum Gender gender;
};

int main()
{
    struct Person p;

    printf("Enter person's name: ");
    scanf("%49s", p.name);

    printf("Select Gender:\n");
    printf("1. Male\n");
    printf("2. Female\n");
    printf("3. Other\n");

    printf("Enter your choice: ");
    scanf("%d", (int *)&p.gender);

    printf("\n----- PERSON DETAILS -----\n");
    printf("Name: %s\n", p.name);

    switch(p.gender)
    {
        case MALE:
            printf("Gender: Male");
            break;

        case FEMALE:
            printf("Gender: Female");
            break;

        case OTHER:
            printf("Gender: Other");
            break;

        default:
            printf("Invalid Gender");
    }

    return 0;
}