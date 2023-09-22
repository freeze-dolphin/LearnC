#include <stdio.h>

// 为什么这种问题不能用 python 写...用 C 有点麻烦了 (┙>∧<)┙へ┻┻
double sum_matrix_partially(double *arr, int m);

/**
 * @author Sapphira Tempset (23211231127)
 * @brief 计算二维数组右上角元素的和
*/
int main() {
    int m;
    scanf("%d", &m);

    double arr[m * m];

    // prompt
    for (int x = 0; x < m; x++) {
        for (int y = 0; y < m; y++) {
            scanf("%lf", &arr[x * m + y]);
        }
    }

    printf("%.2lf\n", sum_matrix_partially(arr, m));

    return 0;
}

double sum_matrix_partially(double *arr, int m) {
    double rst = 0.0;
    for (int x = 0; x < m; x++) {
        for (int y = x; y < m; y++) {
            rst += arr[x * m + y];
        }
    }
    return rst;
}
