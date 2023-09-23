#include <math.h>
#include <stdio.h>

/**
 * @author Sapphira Tempest (23211231127)
 * @brief 方程求根
 */
int main() {
    double a, b, c;

    scanf("%lf %lf %lf", &a, &b, &c);

    double delta = b * b - 4 * (a * c);

    if (delta < 0) {
        printf("no\n");
        return 0;
    }

    double sqrt_delta = sqrt(delta);
    double root1 = (-b + sqrt_delta) / (2 * a);
    double root2 = (-b - sqrt_delta) / (2 * a);

    if (delta == 0 && root1 == root2) {
        printf("%.2lf\n", root1);
    } else {
        int cmp = root1 > root2;
        printf("%.2lf %.2lf\n", cmp ? root1 : root2, cmp ? root2 : root1);
    }

    return 0;
}