#include <stdio.h>

main() {
    char ch, *p1, *p2, s[10][100] = {"four", "hello", "peak", "apple"};
    for (int i = 0; i < 1; i++) {
        // printf("%d\n", i);
        p1 = p2 = s[i];
        ch = *(p1 + i);
        while (*p1 != '\0') {
            // debug info
            // for (int k = 0; k < 4; k++)
            //     printf("%s\n",s[k]);
            // printf("\n");

            if (*p1 != ch) {
                // *p2 = *p1;
                p2++;
            }
            p1++;
        }
        *p2 = '\0';
    }

    for (int j = 0; j < 4; j++)
        printf("%s\n", s[j]);
}
