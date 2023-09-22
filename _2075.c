#include <stdio.h>
#include <string.h>

#define LEN 100

/**
 * @author Sapphira Tempest (23211231127)
 * @brief 字符串排序
 */
int main() {
    int m;
    char tmp[LEN];

    scanf("%d", &m);

    getchar();
    // 重点！！！需要把 scanf 剩下的 \n 吸收
    // 踩坑，调试了一个晚上，终于查资料查到原因了

    char arr[m][LEN];

    for (int n = 0; n < m; n++) {
        fgets(arr[n], LEN, stdin);
    }

    for (int i = 0; i < m - 1; i++) {
        for (int j = i + 1; j < m; j++) {
            if (strcmp(arr[i], arr[j]) > 0) {
                strcpy(tmp, arr[i]);
                strcpy(arr[i], arr[j]);
                strcpy(arr[j], tmp);
            }
        }
    }

    for (int i = 0; i < m; i++) {
        printf("%s", arr[i]);
    }

    return 0;
}
