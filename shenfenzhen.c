#include <stdio.h>

int main() {
    int a1, b1, c1, d1, e1, f1;
    a1 = getchar() - 48;
    b1 = getchar() - 48;
    c1 = getchar() - 48;
    d1 = getchar() - 48;
    e1 = getchar() - 48;
    f1 = getchar() - 48;

    int a2, b2, c2, d2, e2, f2, g2, h2;
    a2 = getchar() - 48;
    b2 = getchar() - 48;
    c2 = getchar() - 48;
    d2 = getchar() - 48;
    e2 = getchar() - 48;
    f2 = getchar() - 48;
    g2 = getchar() - 48;
    h2 = getchar() - 48;

    int a3, b3, c3;
    a3 = getchar() - 48;
    b3 = getchar() - 48;
    c3 = getchar() - 48;

    char va;
    va = getchar();

    printf(
        "地址码: %d\n出生日期: %d 年 %d 月 %d 日\n顺序码: %.3d\n校验码: %c\n",
        a1 * 100000 + b1 * 10000 + c1 * 1000 + d1 * 100 + e1 * 10 + f1,
        a2 * 1000 + b2 * 100 + c2 * 10 + d2, e2 * 10 + f2, g2 * 10 + h2,
        a3 * 100 + b3 * 10 + c3, va);
    return 0;
}
