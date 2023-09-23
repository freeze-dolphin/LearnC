#include <stdio.h>

int fact(int x);

int main() {
    int n;
    scanf("%d", &n);

    int rst = 0;
    for (int i = 1; i <= n; i++) {
        rst += fact(i);
    }

    printf("%d\n", rst);

    return 0;
}

int fact(int x) {
    if (x <= 1) {
        return 1;
    } else
        return fact(x - 1) * x;
}
