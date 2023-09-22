#include <math.h>
#include <stdio.h>

int linear_acc_sum(int a, int n);
int linear_acc_at(int a, int n);

/**
 * @author Sapphira Tempest (23211231127)
 * @brief 我称之为 "线 性  加   速    器     加      法       ！        "
 */
int main() {
    int a, n;
    scanf("%d %d", &a, &n);

    printf("%d\n", linear_acc_sum(a, n));
    return 0;
}

int linear_acc_sum(int a, int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += linear_acc_at(a, i + 1);
    }
    return sum / 10;
}

int linear_acc_at(int a, int n) {
    int rst = 0;
    for (int i = 1; i <= n; i++) {
        rst += (int)pow(10.0, i) * a;
    }
    return rst;
}
