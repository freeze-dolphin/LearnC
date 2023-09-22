#include <math.h>
#include <stdio.h>

double n_at(int n, double x, int *inps);

/**
 * @author Sapphira Tempest (23211231127)
 * @brief 计算多项式的值
 */
int main() {
    int n;
    double x;
    scanf("%d", &n);
    scanf("%lf", &x);

    int inps[n + 1];
    for (int i = 0; i < n + 1; i++) {
        scanf("%d", &inps[i]);
    }

    double rst = 0.0;
    for (int i = 0; i < n + 1; i++) {
        rst += n_at(i, x, inps);
    }

    printf("%.4lf\n", rst);
    return 0;
}

double n_at(int n, double x, int *inps) { return inps[n] * pow(x, n); }
