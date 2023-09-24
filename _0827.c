#include <stdio.h>

int main() {
    int a, b;
    while (1) {
        scanf("%d %d", &a, &b);

        if (a == b && a == 0)
            break;

        int inps[a];
        int to_insert = 0;

        for (int i = 0; i < a; i++) {
            scanf("%d", &inps[i]);

            if (i == 0) {
                if (b <= inps[0]) {
                    to_insert = 0;
                }
            } else if (i == a - 1) {
                if (b >= inps[a - 1]) {
                    to_insert = a;
                }
            } else {
                if (inps[i - 1] <= b && b <= inps[i]) {
                    to_insert = i;
                }
            }
        }

        int passed = 0;
        for (int i = 0; i < a + 1; i++) {
            int tp;
            if (i == to_insert) {
                tp = b;
                passed = 1;
            } else {
                tp = inps[i + (passed ? -1 : 0)];
            }
            printf("%d ", tp);
        }

        printf("\n");
    }

    return 0;
}
