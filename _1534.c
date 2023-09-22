#include <stdio.h>

void sort_and_print(int *arr, int n);

/**
 * @author Sapphira Tempest (23211231127)
 * @brief 一维数组的最大值和最小值，请问与 0828 的区别在何处？
 */
int main() {
    int n;
    scanf("%d", &n);

    int inps[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &inps[i]);
    }

    sort_and_print(inps, n);
    return 0;
}

// 懒了，从 0828 抄过来的 ´ ▽ ` )ﾉ
void sort_and_print(int *arr, int n) {
    for (int i = n; i > 0; i--) {
        for (int j = 0; j < i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int tmp = arr[j + 1];
                arr[j + 1] = arr[j];
                arr[j] = tmp;
            }
        }
    }

    printf("%d %d\n", arr[n - 1], arr[0]);
}
