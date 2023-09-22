#include <stdio.h>

/**
 * @author Sapphira Tempest (23211231127)
 * @brief 数组的最大值及下标
 */
int main() {
    int leng;
    scanf("%d", &leng);

    int inps[leng];
    int max;
    int midx;

    for (int i = 0; i < leng; i++) {
        scanf("%d", &inps[i]);

        if (i == 0) {
            max = inps[i];
            midx = 0;
        } else if (inps[i] > max) {
            max = inps[i];
            midx = i;
        }
    }

    printf("%d %d\n", midx, max);
    return 0;
}