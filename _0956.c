#include <stdio.h>

int main() {
    int aH, aM, aS, bH, bM, bS;
    scanf("%d %d %d %d %d %d", &aH, &aM, &aS, &bH, &bM, &bS);

    int pS = aS + bS;
    int pM = aM + bM;
    int pH = aH + bH;

    if (pS >= 60) {
        pM += pS / 60;
        pS -= pS / 60 * 60;
    }

    if (pM >= 60) {
        pH += pM / 60;
        pM -= pM / 60 * 60;
    }

    printf("%d %d %d\n", pH, pM, pS);

    return 0;
}
