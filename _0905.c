#include <stdio.h>

void reverse(int *a, int n);

int main() {
    int n;
    scanf("%d", &n);

    int inps[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &inps[i]);
    }

    reverse(inps, n);

    for (int i = 0; i < n; i++) {
        printf("%d ", inps[i]);
    }

    printf("\n");

    return 0;
}

void reverse(int *a, int n) {
    for (int i = 0; i < n / 2; i++) {
        int tmp = a[i];
        a[i] = a[n - i - 1];
        a[n - i - 1] = tmp;
    }
}
