#include <stdio.h>
#include <string.h>
#include <ctype.h>

void reverseWords(char *str) {
    char cleaned[1000] = {0};
    char *token, *words[100];
    int i = 0, j;

    for (int k = 0; str[k]; k++) {
        if (str[k] != ',' && str[k] != '.') {
            strncat(cleaned, &str[k], 1);
        }
    }

    token = strtok(cleaned, " ");
    while (token != NULL) {
        words[i++] = token;
        token = strtok(NULL, " ");
    }

    for (j = i - 1; j >= 0; j--) {
        printf("%s", words[j]);
        if (j > 0) printf(" ");
    }
    printf("\n");
}

int main() {
    char str[] = "Hello, world. This is C.";
    reverseWords(str);
    return 0;
}