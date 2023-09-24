#include <math.h>
#include <stdio.h>

#define LEN 100

int abs(int x);
int digit_at(int x, int idx, int i);
int skyp(int n);

int main() {
    int n;
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        int a;
        scanf("%d", &a);
        printf("%d is %sa Sky Number.\n", a, skyp(a) ? "" : "not ");
    }

    return 0;
}

int abs(int x) { return x > 0 ? x : -x; }

int skyp(int n) {
    int len_oct = floor(log10(abs(n))) + 1;
    int len_hex = floor(log10(abs(n)) / log10(16.0)) + 1;
    int len_twl = floor(log10(abs(n)) / log10(12.0)) + 1;

    int s_hex = 0;
    int s_oct = 0;
    int s_twl = 0;

    for (int i = 0; i < len_oct; i++) {
        s_oct += digit_at(n, i, 10);
    }
    for (int i = 0; i < len_hex; i++) {
        s_hex += digit_at(n, i, 16);
    }
    for (int i = 0; i < len_twl; i++) {
        s_twl += digit_at(n, i, 12);
    }

    return (s_hex == s_oct && s_hex == s_twl);
}

int digit_at(int x, int idx, int i) {
    int de = (int)pow(i, idx);
    return x / de % i;
}
