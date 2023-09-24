#include <stdio.h>

int gcd(int a, int b);

int main() {
    int n;
    scanf("%d", &n);

    int cur = 0;
    for (int i = 0; i < n; i++) {
        int a;
        scanf("%d", &a);
        cur = gcd(cur, a);
    }

    printf("%d\n", cur);
    return 0;
}

int gcd(int a, int b) {
    while (b != 0) {
        int tmp = b;
        b = a % b;
        a = tmp;
    }
    return a;
}
