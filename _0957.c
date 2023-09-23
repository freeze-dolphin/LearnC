#include <stdio.h>

int main() {
    char c;
    int n;
    scanf("%c %d", &c, &n);

    int rst = 0;
    if (65 <= c && c <= 90) { // 大写字母a
        rst += c - 64;
    } else {
        rst -= c - 96;
    }

    printf("%d\n", rst + n);

    return 0;
}