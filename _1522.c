#include <stdio.h>

#define LEN 200

int my_strcmp(char *s1, char *s2);
int min(int a, int b);

/**
 * @author Sapphira Tempset (2321231127)
 * @brief 字符串比较
 */
int main() {
    char s1[LEN] = {0};
    char s2[LEN] = {0};

    fgets(s1, LEN, stdin);
    fgets(s2, LEN, stdin);

    printf("%d\n", my_strcmp(s1, s2));

    return 0;
}

int min(int a, int b) {
    if (a > b) {
        return b;
    } else
        return a;
}

int my_strcmp(char *s1, char *s2) {
    int l1 = sizeof(s1) / sizeof(s1[0]);
    int l2 = sizeof(s2) / sizeof(s2[0]);

    int offset = 0;
    for (int i = 0; i < min(l1, l2); i++) {
        if (s1[i] != s2[i]) {
            offset = s1[i] - s2[i]; // 原来不用绝对值啊...
            break;
        }
    }
    return offset;
}
