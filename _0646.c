#include <math.h>
#include <stdio.h>

int judge(int i);
int len(int i);

/**
 * @author Sapphira Tempest (23211231127)
 * @brief 同构数
 */
int main() {
    for (int i = 1; i <= 99; i++) {
        if (judge(i)) {
            printf("%d ", i);
        }
    }

    printf("\n");
    return 0;
}

int len(int i) {
    // 我没有找到求长度的函数，网上找的居然是用 `floor(log10(abs(i))) + 1;`
    // 来求，真牛逼 反正只有 1-99 这个范围，笨方法也不是不能用 23333

    if (i >= 1000) {
        return 4;
    } else if (i >= 100) {
        return 3;
    } else if (i >= 10) {
        return 2;
    } else {
        return 1;
    }
}

int judge(int i) {
    if (i == 1) // 烦了，对于 1 的话就写个特殊处理吧...¯\_(ツ)_/¯
    {
        return 1;
    }

    int powed = (int)pow(i, 2.0);
    int tail = powed;
    while (len(tail) > len(i)) {
        tail = tail % (int)pow(10.0, len(tail) - 1);
    }
    if (tail == i) {
        return 1;
    } else {
        return 0;
    }
}
