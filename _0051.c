#include <math.h>
#include <stdio.h>

int main() {
    int x, y;
    int calc(int x, int e, int rat, int powed);

    scanf("%d %d", &x, &y);

    int r1 = calc(x, y, 0, 2), r2 = calc(x, y, 1, 3);

    printf("%d %d\n", r1, r2);

    return 0;
}

int calc(int s, int e, int rat, int powed) {
    int rst = 0;
    for (int i = s; i <= e; i++) {
        if (i % 2 == rat) {
            rst += pow(i, powed);
        }
    }
    return rst;
}
