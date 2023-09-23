#include <stdio.h>

int leapp(int a);

int main() {
    int y;
    scanf("%d", &y);
    printf("%c\n", leapp(y) ? 'Y' : 'N');
    return 0;
}

int leapp(int a) { return (a % 4 == 0 && a % 100 != 0) || a % 400 == 0; }
