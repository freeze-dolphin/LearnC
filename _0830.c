#include <stdio.h>
#include <string.h>

#define LEN 100

/**
 * @author Sapphira Tempest (23211231127)
 * @brief 查找最大的字符
 */
int main() {
    char st[LEN];
    fgets(st, LEN, stdin);

    int max = 0;
    for (int i = 0; i < strlen(st); i++) {
        if (st[i] > max) {
            max = st[i];
        }
    } // 第一遍，找出最大的

    int cur = 0;
    int maxes[LEN];
    for (int i = 0; i < strlen(st); i++) {
        printf("%c", st[i]);
        if (st[i] == max) {
            printf("(max)");
        }
    } // 第二遍，根据最大的找出所有的位置并打印

    return 0;
}
