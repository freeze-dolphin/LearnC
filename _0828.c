#include <stdio.h>

void sort(int *arr);

/**
 * @author Sapphira Tempest (23211231127)
 * @brief 数组排序
 */
int main() {
    int n;
    scanf("%d", &n);

    int inps[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &inps[i]);
    }

    sort(inps);

    for (int i = 0; i < n; i++) {
        printf("%d ", inps[i]);
    }

    printf("\n");
    return 0;
}

// 冒泡...高中学的忘光了，还得重新推导一次
void sort(int *arr) {
    for (int i = 5; i > 0; i--) {
        for (int j = 0; j < i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // 交换！ ssssssssswap!
                int tmp = arr[j + 1];
                arr[j + 1] = arr[j];
                arr[j] = tmp;
            }
        }
    }
}
