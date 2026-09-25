#include <stdio.h>
#include <string.h>

// Helper function to swap two characters
void swap(char *a, char *b) {
    char temp = *a;
    *a = *b;
    *b = temp;
}

// Helper function to reverse a segment of a string from index 'start' to 'end'
void reverseSegment(char *str, int start, int end) {
    while (start < end) {
        swap(&str[start], &str[end]);
        start++;
        end--;
    }
}

// Function to reverse each word in-place
void reverseWordsInSentence(char *str) {
    int length = strlen(str);
    int start = 0;

    for (int i = 0; i <= length; i++) {
        // When we hit a space or the end of the string, we've found a word
        if (str[i] == ' ' || str[i] == '\0') {
            // Reverse the current word
            reverseSegment(str, start, i - 1);
            // Move the start pointer to the beginning of the next word
            start = i + 1;
        }
    }
}

int main() {
    // Note: The string must be modifiable (stored in an array, not as a string literal)
    char sentence[] = "Hello World from C";

    printf("Original: %s\n", sentence);

    reverseWordsInSentence(sentence);

    printf("Reversed: %s\n", sentence);

    return 0;
}