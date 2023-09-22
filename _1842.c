#include <math.h>
#include <stdio.h>

double calc_epowx(double a);
double epowx_at(double x, int idx);
int fact(int x);
double abs_f(double x);

/**
 * @author Sapphira Tempest (23211231127)
 * @brief e ^ x
 */
int main() {
    int times;
    scanf("%d", &times);

    while (times > 0) {
        double a;
        scanf("%lf", &a);
        printf("%.8lf\n", calc_epowx(a));
        times--;
    }

    return 0;
}

double epowx_at(double x, int idx) {
    if (idx < 0) {
        return -1;
    }
    return pow(x, idx) / (double)fact(idx);
}

double abs_f(double x) {
    double rst = x;
    if (rst < 0) {
        rst *= -1;
    }
    return rst;
}

double calc_epowx(double a) {
    double rst = 0.0;

    int i = 0;
    double curr = epowx_at(a, i);
    double prev = epowx_at(a, i - 1);
    for (i = 0; abs_f(curr - prev) >= 0.000000001; i++) {
        rst += epowx_at(a, i);

        curr = epowx_at(a, i + 1);
        prev = epowx_at(a, i);
    }
    return rst;
}

int fact(int x) {
    if (x <= 1) {
        return 1;
    } else
        return fact(x - 1) * x;
}
