#include <stdio.h>
#include <stdlib.h>

#define LEN 100

void oct_to_hex(int n);
char oct_digit_to_hex_note(int n);
// char *reverse(char *des);

// 这道题要求字符输出用 %s，数字输出用 %d，被坑了好久...

/**
 * @author Sapphira Tempset (23211231127)
 * @brief 十进制转换为十六进制
 */
int main() {
    int n;
    int sc;

    while (scanf("%d", &n) != EOF) {

        if (n >= 10) {
            // printf("%lX\n", (long unsigned int)n);
            // 这么做可以，但是题目的意思应该是让我自己写一个转换算法

            oct_to_hex(n);
            printf("\n");
        } else if (n == 0) {
            printf("0\n");
        }
    }
    return 0;
}

/**
 * @deprecated 算了不写了 (┙>∧<)┙へ┻┻（为啥要写个函数来求反向字符串...）
char *reverse(char *des) {
    // int dlen = sizeof(des) / sizeof(des[0]) / 2 - 1;
    // 发现这种方法求字符串长度不好用

    // char rst[dlen];

    // for (int i = 0; i < dlen; i++) {
    //     rst[i] = des[dlen - i];
    // }

    // return rst;
    //
    // C 语言中返回在函数内产生的变量会报警，汗...

    // 那么所有的操作只能在原始数据上完成，然后返回一个指向字符串开头的指针

    for (int i = 0; i < dlen / 2; i++) {
        char tmp = des[dlen - i - 1];
        des[dlen - i - 1] = des[i];
        des[i] = tmp; // 镜像交换
    }
    return des;
}
*/

char oct_digit_to_hex_note(int n) {
    if (n < 10) {
        return n;
    } else {
        return n + 55;
    }
}

void oct_to_hex(int n) {
    if (n > 10)
        oct_to_hex(n / 16);
    int t = oct_digit_to_hex_note(n % 16);
    if (n % 16 >= 10)
        printf("%c", t);
    else {
        if (t == 0)
            return;
        printf("%d", t);
    }

    // int i = 0;
    // while (n > 0) {
    //     int d = oct_digit_to_hex_note(n % 16);
    //     if (d < 10) {
    //         printf("%d", d);
    //     } else {
    //         printf("%c", d);
    //     }
    //     n = n / 16;
    //     i++;
    // }
}
