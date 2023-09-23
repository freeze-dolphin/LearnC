#include <stdio.h>

int leapp(int y);

int main() {
    int y, m;
    scanf("%d %d", &y, &m);

    int day = 0;

    switch (m) {
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
        day += 31;
        break;

    case 4:
    case 6:
    case 9:
    case 11:
        day += 30;
        break;

    default:
        day += leapp(y) ? 29 : 28;
        break;
    }

    printf("%d\n", day);

    return 0;
}

int leapp(int a) { return (a % 4 == 0 && a % 100 != 0) || a % 400 == 0; }
