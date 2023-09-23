#include <stdio.h>

int main() {
    int a, b;
    scanf("%d %d", &a, &b);

    for (int i = a; i <= b; i++) {
        printf(i == b ? "%d!" : "%d!+", i);
    }

    printf("\n");

    return 0;
}
