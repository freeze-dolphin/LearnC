#include <stdio.h>

int min(int a, int b);
int max(int a, int b);

int main() {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

    printf("%d %d %d %d %d\n", a + b + c, (int)((a + b + c) / 3), a * b * c,
           min(min(a, b), c), max(c, max(a, b)));

    return 0;
}

int min(int a, int b) { return a > b ? b : a; }
int max(int a, int b) { return a > b ? a : b; }
