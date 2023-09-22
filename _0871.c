#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int s_len(int i);
int digit_at(int x, int idx);
int sum_each_digit(int x);

// 我一定要吐槽一句：这道题和 0851 有什么区别啊，工具函数拉过来改两下就成了 2333

/**
 * @author Sapphira Tempest (23211231127)
 * @brief 统计整数的数字和（函数）
 * @date 2023.9.22
 */
int main() {
    int times;
    scanf("%d", &times);

    int inps[times];

    for (int i = 0; i < times; i++) {
        scanf("%d", &inps[i]);
    }

    for (int i = 0; i < times; i++) {
        printf("%d\n", sum_each_digit(abs(inps[i])));
    }
    return 0;
}

int s_len(int i) {
    if (i == 0)
        return 1;
    return floor(log10(abs(i))) + 1;
}

int digit_at(int x, int idx) {
    int de = (int)pow(10.0, idx);
    return x / de % 10;
}

int sum_each_digit(int x) {
    int rst = 0; // 记得要初始化，不然会导致累加...
    for (int i = 0; i < s_len(x); i++) {
        rst += digit_at(x, s_len(x) - i - 1);
    }
    return rst;
}
