#include <stdio.h>

enum UserRole
{
    ADMIN = 1,
    USER,
    GUEST
};

int main()
{
    enum UserRole role;

    printf("----- USER ROLES -----\n");
    printf("1. ADMIN\n");
    printf("2. USER\n");
    printf("3. GUEST\n");

    printf("Enter your role: ");
    scanf("%d", (int *)&role);

    switch(role)
    {
        case ADMIN:
            printf("Welcome Admin! You have full access.");
            break;

        case USER:
            printf("Welcome User! You have limited access.");
            break;

        case GUEST:
            printf("Welcome Guest! You have read-only access.");
            break;

        default:
            printf("Invalid user role.");
    }

    return 0;
}