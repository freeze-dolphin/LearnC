#include <stdio.h>

int sum_each_digit(int x);

/**
 * @author Sapphira Tempest (23211231127)
 * @brief 计算整数各数字的和 (循环)
 */
int main() {
    int times;
    scanf("%d", &times);

    int inps[times];
    for (int i = 0; i < times; i++) {
        scanf("%d", &inps[i]);
    }

    for (int i = 0; i < times; i++) {
        printf("%d\n", sum_each_digit(inps[i]));
    }

    return 0;
}

/**
 * @brief 求数字 x 每一位上的数的和
 */
int sum_each_digit(int x) {
    int t = x;
    int rst = 0;
    while (t > 0) {
        rst += t % 10;
        t = t / 10;
    }
    return rst;
}
