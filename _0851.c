#include <stdio.h>

int s_len(int i);

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

    
}

int s_len(int i) { return floor(log10(abs(i))) + 1; }