#include <stdio.h>

double min(double a, double b);

int main() {
    double a, b, c;
    scanf("%lf %lf %lf", &a, &b, &c);

    printf("%.2lf\n", min(c, min(a, b)));

    return 0;
}

double min(double a, double b) { return a < b ? a : b; }
