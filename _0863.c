#include <stdio.h>
#include <string.h>

#define LEN 100

int containp(char *ed, char q);

int main() {
    char st[LEN];

    fgets(st, LEN, stdin);

    char ed[LEN];
    int id = 0;

    for (int i = 0; i < LEN; i++) {
        if (st[i] == '\n')
            break;
        if (!containp(ed, st[i]) && st[i] >= 65 && st[i] <= 90) {
            ed[id] = st[i];
            id++;
            printf("%c ", st[i]);
        }
    }

    printf("\n");

    return 0;
}

int containp(char *ed, char q) {
    for (int i = 0; i < strlen(ed); i++) {
        if (ed[i] == q) {
            return 1;
        }
    }
    return 0;
}
