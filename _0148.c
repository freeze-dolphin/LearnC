#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        for (int y = 0; y < i + 1; y++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}