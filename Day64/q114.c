#include <stdio.h>
#include <string.h>

int main() {
    char s[1000];
    int i, j, start = 0, maxLength = 0;
    int lastSeen[256];

    scanf("%999s", s);

    for (i = 0; i < 256; i++) {
        lastSeen[i] = -1;
    }

    for (j = 0; s[j] != '\0'; j++) {
        unsigned char ch = (unsigned char)s[j];

        if (lastSeen[ch] >= start) {
            start = lastSeen[ch] + 1;
        }

        lastSeen[ch] = j;

        if (j - start + 1 > maxLength) {
            maxLength = j - start + 1;
        }
    }

    printf("%d\n", maxLength);

    return 0;
}
