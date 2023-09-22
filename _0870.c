#include <stdio.h>

#define ENOUGH 20

int primep(int n);
int count_prime(int s, int e);

/**
 * @author Sapphira Tempest (23211231127)
 * @brief 统计素数个数（函数）
 */
int main() {
    int as[ENOUGH];
    int bs[ENOUGH];

    int i = 0;
    while (1) {
        scanf("%d %d", &as[i], &bs[i]);
        if (!as[i] && !bs[i])
            break;
        i++;
    }

    for (int ia = 0; ia < i; ia++) {
        printf("%d\n", count_prime(as[ia], bs[ia]));
    }

    return 0;
}

int count_prime(int s, int e) {
    int cnt = 0;
    for (int i = s; i <= e; i++) {
        if (primep(i))
            cnt += 1;
    }
    return cnt;
}

int primep(int n) {
    int rst = 1;
    for (int i = 2; i < n; i++) {
        if (n % i == 0) {
            rst = 0;
        }
    }
    return rst;
}
