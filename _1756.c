#include <stdio.h>

int tr_sum(int n);

int main() {
    int n;
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        int a, b;
        scanf("%d %d", &a, &b);

        printf("%s\n", (tr_sum(a) == b && tr_sum(b) == a) ? "YES" : "NO");
    }

    return 0;
}

int tr_sum(int n) {
    int rst = 0;
    for (int i = 1; i < n; i++) {
        if (n % i == 0) {
            rst += i;
        }
    }
    return rst;
}
