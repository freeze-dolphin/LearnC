#include <stdio.h>
#include <string.h>

#define LEN 100

int palindromep(char *st);

/**
 * @author Sapphira Tempest (23211231127)
 * @brief 回文
 */
int main() {
    int n;
    scanf("%d", &n);

    getchar();

    char inps[n][LEN];
    for (int i = 0; i < n; i++) {
        fgets(inps[i], LEN, stdin);
    }

    for (int i = 0; i < n; i++) {
        printf("%s\n", palindromep(inps[i]) ? "yes" : "no");
    }

    return 0;
}

int palindromep(char *st) {
    int len = strlen(st) - 1;
    int p = 1;
    for (int i = 0; i < len / 2; i++) {
        if (st[i] != st[len - i - 1]) {
            p = 0;
        }
    }
    return p;
}
