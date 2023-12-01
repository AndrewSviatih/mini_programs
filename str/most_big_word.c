#include <stdio.h>
#include <string.h>

#define WORD_LENGTH 20

int main() {
    char current_word[WORD_LENGTH] = {0};
    char max_word[WORD_LENGTH] = {0};
    int current_length = 0, max_length = 0;

    while (1 == scanf("%s", current_word)) {
        current_length = strlen(current_word);
        if (current_length > max_length) {
            strcpy(max_word, current_word);
            max_length  = current_length;
        }
    }

    printf("%s %d", max_word, max_length);

    return 0;
}