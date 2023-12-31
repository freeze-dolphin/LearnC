#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int s_len(int i);
int digit_at(int x, int idx);
void print_split_num(int x);

/**
 * @author Sapphira Tempest (23211231127)
 * @brief 顺序输出整数的各位数字 (循环)
 */
int main() {
    int times;
    scanf("%d", &times);

    int inps[times];

    for (int i = 0; i < times; i++) {
        scanf("%d", &inps[i]);
    }

    for (int i = 0; i < times; i++) {
        print_split_num(inps[i]);
    }
}

int s_len(int i) {
    if (i == 0)
        return 1;
    return floor(log10(abs(i))) + 1;
}

int digit_at(int x, int idx) {
    int de = (int)pow(10.0, idx);
    return x / de % 10;
}

void print_split_num(int x) {
    for (int i = 0; i < s_len(x); i++) {
        printf("%d ", digit_at(x, s_len(x) - i - 1));
    }
    printf("\n");
}
