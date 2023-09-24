#include <math.h>
#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {

        int m;
        scanf("%d", &m);

        int inps[m];
        double avg = 0, std = 0;
        for (int j = 0; j < m; j++) {
            scanf("%d", &inps[j]);
            avg += inps[j];
        }

        avg = avg / m;

        for (int k = 0; k < m; k++) {
            std += pow(inps[k] - avg, 2.0);
        }

        std = pow(std / m, 0.5);

        printf("%.3lf %.3lf\n", avg, std);
    }

    return 0;
}
