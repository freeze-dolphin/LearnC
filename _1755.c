#include <stdio.h>

double f(double x, double y);

/**
 * @author Sapphira Tempest (23211231127)d
 * @brief 计算函数的值
 */
int main() {
    double x, y;

    // 我去还有这种写法！原来 scanf 是有返回值的吗...
    while (scanf("%lf %lf", &x, &y) != EOF) {
        printf("%.2lf\n", f(x, y));
    }
    return 0;
}

double f(double x, double y) {
    if (x < 0) {
        return x + y;
    } else {
        return f(x - 1, x + y) + x / y;
    }
}
