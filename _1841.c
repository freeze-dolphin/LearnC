#include <stdio.h>

int leapp(int a);
int day_by_month(int y, int m);

int main() {
    int n;
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        int year, month, day;
        scanf("%d/%d/%d", &year, &month, &day);

        int ds = 0;
        for (int j = 1; j < month; j++) {
            ds += day_by_month(year, j);
        }

        ds += day;

        printf("%d\n", ds);
    }

    return 0;
}

int day_by_month(int y, int m) {
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

    return day;
}

int leapp(int a) { return (a % 4 == 0 && a % 100 != 0) || a % 400 == 0; }
