#include <stdio.h>
#include <string.h>

#define LEN 100

/**
 * @author Sapphira Tempest (23211231127)
 * @brief 不定长输入 & 字符串排序
 */
int main() {
    int m = 0;
    char tmp[LEN];

    char arr[LEN][LEN];

    while (!feof(stdin)) {
        fgets(arr[m], LEN, stdin);
        m += 1;
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