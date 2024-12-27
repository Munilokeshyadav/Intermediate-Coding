#include <stdio.h>
#include <string.h>

int isSubstring(char *str1, char *str2) {
    return strstr(str1, str2) != NULL;
}

int main() {
    char str1[] = "hello world";
    char str2[] = "world";

    if (isSubstring(str1, str2)) {
        printf("True\n");
    } else {
        printf("False\n");
    }

    char str3[] = "python";
    if (isSubstring(str1, str3)) {
        printf("True\n");
    } else {
        printf("False\n");
    }

    return 0;
}