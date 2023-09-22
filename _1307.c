#include <math.h>
#include <stdio.h>

float sum_s(float x);
float s(float x, int n);
float abs_f(float x);

/**
 * @author Sapphira Tempest (23211231127)
 * @brief 计算数列和
 */
int main() {
    int times;
    scanf("%d", &times);

    float inps[times];
    for (int n = 0; n < times; n++) {
        scanf("%f", &inps[n]);
    }

    for (int n = 0; n < times; n++) {
        printf("%.5f\n", sum_s(inps[n]));
    }

    return 0;
}

float sum_s(float x) {
    int n = 1;

    float cur = s(x, n);
    float rst = 0.0; // 噂嘟？

    while (abs_f(cur) >= 0.00001) {
        rst += cur;
        n += 1;
        cur = s(x, n);
    }
    return rst;
}

float s(float x, int n) { return pow(-1, n + 1) * (n / pow(x, n)); } // 私认为 pow(-1, n + 1) 可以简单的优化一下，但是效果微乎其微，也罢

/**
 * @brief stdlib.h 里的 abs 只能处理整数，故编写此函数
 */
float abs_f(float x) {
    float rst = x;
    if (rst < 0) {
        rst *= -1;
    }
    return rst;
}
