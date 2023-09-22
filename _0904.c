#include <stdio.h>

#define LEN 100

void copy(char *s1, char *s2, int m);

/**
 * @author Sapphira Tempest (23211231127)
 * @brief str_partially_cpy（？
 */
int main() {
    char st[LEN];
    int start;

    fgets(st, LEN, stdin); // 编译器提示我从 gets 改用 fgets
    scanf("%d", &start);

    char neo_st[LEN - start];
    copy(st, neo_st, start);

    printf("%s", neo_st);
    return 0;
}

void copy(char *s1, char *s2, int m) {
    for (int i = m; i < LEN; i++) {
        s2[i - m] = s1[i - 1];
    }
}
