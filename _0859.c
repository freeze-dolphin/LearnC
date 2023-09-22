#include <stdio.h>

int main() {
    char a, b, c;
    scanf("%c%c%c", &a, &b, &c);

    if (a > b && b > c) {
        printf("%c %c %c", c, b, a);
    }

    if (a > c && c > b) {
        printf("%c %c %c", c, b, a);
    }

    // ---

    if (b > a && a > c) {
        printf("%c %c %c", c, a, b);
    }

    if (b > c && c > a) {
        printf("%c %c %c", a, c, b);
    }

    // ---

    if (c > a && a > b) {
        printf("%c %c %c", b, a, c);
    }

    if (c > b && b > a) {
        printf("%c %c %c", a, b, c);
    }

    printf("\n");

    return 0;
}
