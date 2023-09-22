#include <stdio.h>

#define LEN 91
// 因为题目要求中提到最高 13 行，简单计算后得出数组最高长度

// 另外感谢提示，不得不说 C
// 语言的格式化功能还挺强的（虽然其他语言很多都继承了这一点）

int cnt_until(int until);
void print_tri(int n1, int n2, int *arr);

/**
 * @author Sapphira Tempest (23211231127)
 * @brief 杨辉三角
 */
int main() {
    int arr[LEN];

    int n;
    while (1) {
        scanf("%d", &n);
        if (n == 0)
            break;
        print_tri(n, 0, arr);
    }

    return 0;
}

int cnt_until(int until) {
    // if (until <= 1) {
    //     return until;
    // } else
    //     return cnt_until(until - 1) + until;
    //
    // 我在写什么？明明有直接的数学结论

    return (1 + until) * until / 2;
}

void print_tri(int n1, int n2, int *arr) {
    for (int y = n2; y < n1; y++) {
        int st = cnt_until(y);
        arr[st] = 1;                  // 开头的 1
        for (int x = 1; x < y; x++) { // 中间的元素
            arr[st + x] /* 当前元素 */ =
                arr[st + x - y - 1] /* 正上方的前一个元素 */ +
                arr[st + x - y] /*当前元素的正上方*/;
        }
        arr[st + y] = 1; // 行尾的 1
    }

    // 打印
    for (int y = n2; y < n1; y++) {
        int st = cnt_until(y);
        printf("%4d", arr[st]);
        for (int x = 1; x < y; x++) { // 中间的元素
            printf("%4d", arr[st + x]);
        }
        if (y != n2) {
            printf("%4d\n", arr[st + y]);
        } else {
            printf("\n");
        }
    }
}