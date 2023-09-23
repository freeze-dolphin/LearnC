#include <math.h>
#include <stdio.h>

double invert(int n);

int main() {
    // 1/(1*2)-1/(2*3)+1/(3*4)+...+(-1)^n/((n-1)*n)

    int n;
    scanf("%d", &n);

    double rst = 0.0;
    for (int i = 0; i < n - 1; i++) {
        rst += invert(i) / ((i + 1) * (i + 2));
    }

    printf("%.3lf\n", rst);

    return 0;
}

double invert(int n) { return n % 2 == 0 ? 1 : -1; }
