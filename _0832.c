#include <stdio.h>

int main() {
    int a, b;
    scanf("%d %d", &b, &a);

    int arr[a * b];
    for (int i = 0; i < a * b; i++) {
        scanf("%d", &arr[i]);
    }

    int minp = 1;
    for (int i = 0; i < b; i++) {
        int cmax = 0;
        int pmax = 0;
        for (int j = 0; j < a; j++) {
            int cur = arr[i * a + j];

            if (cur > cmax) {
                cmax = cur;
                pmax = i * a + j;
            }
        }

        for (int k = pmax % a; k < a * b; k += a) {
            if (arr[k] > cmax)
                minp = 0;
        }

        if (!minp) {
            int y = pmax / a;
            int x = pmax % a;

            printf("%d %d %d \n", y, x, cmax);
            break;
        }
    }

    if (minp)
        printf("N\n");

    return 0;
}