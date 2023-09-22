#include <stdio.h>

int perfectp(int x);

/**
 * @author Sapphira Tempest (23211231127)
 * @brief 完数
*/
int main() {
    for (int i = 1; i <= 1000; i++) {
        if (perfectp(i))
            printf("%d\n", i);
    }

    return 0;
}

int perfectp(int x) {
    int sumd = 0;
    for (int i = 1; i < x; i++) {
        if (x % i == 0) {
            sumd += i; // (┙>∧<)┙へ┻┻
        }
    }
    return (sumd == x);
}
