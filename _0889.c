#include <stdio.h>

int total(int n);

int main() {
    int n;
    scanf("%d", &n);

    double rst = 0.0;
    for (int i = 1; i <= n; i++) {
        rst += 1.0 / total(i);
    }

    printf("%.3lf\n", rst);
    return 0;
}

int total(int n) {
    int rst = 0;
    for (int i = 1; i <= n; i++) {
        rst += i;
    }
    return rst;
}
