#include <stdio.h>
#include <stdlib.h>

int gcd(int a, int b);
int lcm(int a, int b);

/**
 * @author Sapphira Tempest (23211231127)
 * @brief gcd！是gcd！！！
 */
int main() {
    int times;
    scanf("%d", &times);

    int inps[times];
    for (int n = 0; n < times; n++) {
        for (int i = 0; i < 2; i++) {
            scanf("%d", &inps[n * 2 + i]);
        }
    }

    for (int n = 0; n < times; n++) {
        int a = inps[n * 2 + 0];
        int b = inps[n * 2 + 1];

        printf("%d %d\n", gcd(a, b), lcm(a, b));
    }

    return 0;
}

/**
 * @brief 辗转相除，爱来自欧拉 https://en.wikipedia.org/wiki/Euclidean_algorithm
 */
int gcd(int a, int b) {
    while (b != 0) {
        int tmp = b;
        b = a % b;
        a = tmp;
    }
    return a;
}

/**
 * @brief 维基上找的公式 https://en.wikipedia.org/wiki/Least_common_multiple
 */
int lcm(int a, int b) { return abs(a * b) / gcd(a, b); }
