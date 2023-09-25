#include <stdio.h>

#define LEN 100

int main() {
    char s1[LEN];
    char s2[LEN];

    fgets(s1, LEN, stdin);
    fgets(s2, LEN, stdin);

    for (int i = 0; i < LEN; i++) {
        if (s1[i] == '\0' || s1[i] == '\n') {
            break;
        }

        printf("%c", s1[i]);
    }

    for (int i = 0; i < LEN; i++) {
        if (s2[i] == '\0') {
            break;
        }

        printf("%c", s2[i]);
    }

    return 0;
}
