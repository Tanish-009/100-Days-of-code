#include <stdio.h>
#include <ctype.h>

int main() {
    char str[1000];
    int i;

    fgets(str, sizeof(str), stdin);

    for (i = 0; str[i] != '\0'; i++) {
        if (i == 0) {
            str[i] = toupper(str[i]);
        } else {
            str[i] = tolower(str[i]);
        }
    }

    printf("%s", str);

    return 0;
}