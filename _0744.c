#include <stdio.h>

int main() {
    while (1) {
        int arr[6];
        scanf("%d %d %d %d %d %d", &arr[0], &arr[1], &arr[2], &arr[3], &arr[4],
              &arr[5]);

        if (!arr[0] && !arr[1] && !arr[2] && !arr[3] && !arr[4] && !arr[5])
            break;

        for (int i = 0; i < 6; i++) {
            for (int j = i + 11; j > i + 5; j--) {
                int idx = (5 - j % 6 - 1) % 6 + 1;
                printf("%d%s", arr[idx], j == i + 6 ? "" : " ");
            }
            printf("\n");
        }
    }

    return 0;
}
