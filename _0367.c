#include <math.h>
#include <stdio.h>

int abs(int x);
int digit_at(int x, int idx);

int main() {
    int n;

    while (1) {
        scanf("%d", &n);

        if (n == 0)
            break;

        int len = floor(log10(abs(n))) + 1;

        int trig = 1;
        for (int i = 0; i < len / 2; i++) {
            if (digit_at(n, i) != digit_at(n, len - i - 1)) {
                trig = 0;
            }
        }

        printf("%s.\n", trig ? "Yes" : "No");
    }

    return 0;
}

int abs(int x) { return x > 0 ? x : -x; }

int digit_at(int x, int idx) {
    int de = (int)pow(10.0, idx);
    return x / de % 10;
}
