#include <stdio.h>

int main() {
    char ch;
    int n;
    scanf("%c %d", &ch, &n);

    for (int l = 0; l < n; l++) {
        for (int w = n - l - 1; w > 0; w--) {
            printf(" ");
        } // 开头的空格

        printf("%c", ch); // 第一个 A

        if (l != n - 1) {
            for (int w = 0; w < l * 2 - 1; w++) {
                printf(" ");
            } // 中间的空格
        }

        if (l > 0) {          // 第一行没有两个 A
            if (l == n - 1) { // 最后一行
                for (int w = 0; w < 2 * n - 2; w++) {
                    printf("%c", ch);
                }
                printf("\n");
            } else {
                printf("%c\n", ch); // 第二个 A
            }
        } else {
            printf("\n");
        }
    }

    return 0;
}