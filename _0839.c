#include <stdio.h>

#define LEN 100

int main() {
    int len;
    scanf("%d", &len);

    int inps[LEN] = {0};
    for (int i = 0; i < len; i++) {
        scanf("%d", &inps[i]);
    }

    int to_remove;
    int rm_cnt = 0;
    scanf("%d", &to_remove);

    for (int i = 0; i < len; i++) {
        if (inps[i] == to_remove) {
            rm_cnt += 1;
            for (int j = i; j < len; j++) {
                inps[j] = inps[j + 1];
            }
            i--; // 否则会导致连续的需去除的数字无法去除干净
        }
    }

    for (int i = 0; i < len - rm_cnt; i++) {
        printf("%d ", inps[i]);
    }

    printf("\n");
    return 0;
}
