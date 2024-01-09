#include <stdio.h>
#include <string.h>
int main() {
    int i, j;
    char str[10], *s[10] = {"SQL", "hello", "bear", "zone"};
    gets(str);
    for (i = 0; i < 4; i++) {
        if (strcmp(str, s[i]) > 0)
            continue;
        j = 3;
        while (j >= i) {
            s[j + 1] = s[j];
            j--;
        }
        s[i] = str;
        break;
    }
    if (i == 4)
        s[4] = str;
    for (i = 0; i < 5; i++)
        printf("%s  ", s[i]);
    putchar('\n');
    return 0;
}
