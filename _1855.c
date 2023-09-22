#include <stdio.h>

int fib(int x);

/**
 * @author Sapphira Tempest (23211231127)
 * @brief fib
 */
int main() {
    int times;
    scanf("%d", &times);

    int inps[times];

    for (int i = 0; i < times; i++) {
        scanf("%d", &inps[i]);
    }

    for (int i = 0; i < times; i++) {
        printf("%d\n", fib(inps[i]));
    }

    return 0;
}

int fib(int n) {
    if (n <= 2) {
        return 1;
    } else {
        return fib(n - 1) + fib(n - 2);
    }
}
