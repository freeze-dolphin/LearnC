#include <stdio.h>

int judge_trig(int a, int b, int c);

int main() {
    int n;
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        int a = 0, b = 0, c = 0;
        scanf("%d %d %d", &a, &b, &c);
        printf("%d\n", judge_trig(a, b, c));
    }

    return 0;
}

int judge_trig(int a, int b, int c) {
    if (a <= 0 || b <= 0 || c <= 0)
        return 0;

    return (a * a + b * b == c * c || a * a + c * c == b * b ||
            c * c + b * b == a * a);
}
