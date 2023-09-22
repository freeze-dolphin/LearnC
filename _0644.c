#include <stdio.h>

int main() {
    int times;
    scanf("%d", &times);

    // char fmt[times * 3];
    int min;
    // for (int n = 0; n < times; n += 3)
    // {
    //     fmt[n] = '%';
    //     fmt[n + 1] = 'd';
    //     fmt[n + 2] = ' ';
    // }

    int inps[times];
    // scanf(fmt, );

    for (int i = 0; i < times; i++) {
        scanf("%d", &inps[i]);
        if (inps[i] < min || i == 0) {
            min = inps[i];
        }
    }

    printf("%d\n", min);

    return 0;
}
