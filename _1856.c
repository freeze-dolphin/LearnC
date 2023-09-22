#include <math.h>
#include <stdio.h>

int narcissusp(int x);
void print_range_narc(int s, int e);

/**
 * @author Sapphira Tempest (23211231127)d
 * @brief 水仙花
 */
int main() {
    int times;
    scanf("%d", &times);

    int ia[times];
    int ib[times];

    for (int i = 0; i < times; i++) {
        scanf("%d %d", &ia[i], &ib[i]);
    }

    for (int i = 0; i < times; i++) {
        print_range_narc(ia[i], ib[i]);
    }
    return 0;
}

void print_range_narc(int s, int e) {
    int has_rst = 0;
    for (int i = s; i <= e; i++) {
        int narc = narcissusp(i);
        if (narc) {
            printf("%d ", i);
            has_rst = 1;
        }
    }

    if (!has_rst) {
        printf("no");
    }
    printf("\n");
}

int narcissusp(int x) {
    int a = x / 100, b = x / 10 % 10, c = x % 10;
    int _a = (int)pow(a, 3.0), _b = (int)pow(b, 3.0), _c = (int)pow(c, 3.0);

    return (_a + _b + _c == x);
}
