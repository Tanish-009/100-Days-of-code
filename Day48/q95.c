#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>

bool isRotation(const char *s1, const char *s2) {
    size_t len1 = strlen(s1);
    size_t len2 = strlen(s2);

    // If lengths differ, s2 cannot be a rotation of s1
    if (len1 != len2 || len1 == 0) {
        return false;
    }

    // Allocate memory for the concatenated string: (s1 + s1)
    // Size is len1 * 2 + 1 for the null terminator
    char *temp = (char *)malloc(len1 * 2 + 1);
    if (temp == NULL) {
        perror("Memory allocation failed");
        return false;
    }

    // Concatenate s1 with itself
    strcpy(temp, s1);
    strcat(temp, s1);

    // Check if s2 is a substring of temp
    bool result = (strstr(temp, s2) != NULL);

    // Free the dynamically allocated memory
    free(temp);

    return result;
}

int main() {
    const char *str1 = "waterbottle";
    const char *str2 = "erbottlewat";

    if (isRotation(str1, str2)) {
        printf("'%s' is a rotation of '%s'\n", str2, str1);
    } else {
        printf("'%s' is NOT a rotation of '%s'\n", str2, str1);
    }

    return 0;
}