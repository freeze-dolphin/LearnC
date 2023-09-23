#include <stdio.h>

int main() {
    int ctl;
    while (1) {
        scanf("%d", &ctl);
        if (ctl == 0)
            break;

        int zero = 0;
        int pos = 0;
        int neg = 0;
        for (int i = 0; i < ctl; i++) {
            double dd;
            scanf("%lf", &dd);

            if (dd > 0.0) {
                pos += 1;
            } else if (dd < 0.0) {
                neg += 1;
            } else {
                zero += 1;
            }
        }
        printf("%d %d %d\n", neg, zero, pos);
    }

    return 0;
}