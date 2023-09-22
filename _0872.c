#include <stdio.h>

int recur_sum(int until);

/**
 * @author Sapphira Tempest (23211231127)
 * @brief 简单的递归求和
*/
int main() {
    int n;
    scanf("%d", &n);

    printf("%d\n", recur_sum(n));

    return 0;
}

int recur_sum(int until) {
    if (until == 1) {
        return 1;
    } else {
        return recur_sum(until - 1) + until;
    }
}
