#include <stdio.h>

#define LEN 100

struct student {
    int id;
    char name[LEN];
    char sex; // M - male | F - female
    int year, month, day;
    double x, y, z;
};

void InputSingle(struct student *p) {
    scanf("%d %s %c %d %d %d %lf %lf %lf", &p->id, &p->name, &p->sex, &p->year,
          &p->month, &p->day, &p->x, &p->y, &p->z);
}

struct student InputSingle() {
    struct student stu;
    InputSingle(&stu);
    return stu;
}

void OutputSingle(struct student a) {
    double tot = (a.x + a.y + a.z);
    printf("%.7d %s %c %d %d %d %.1lf %.1lf %.1lf %.1lf %.1lf\n", a.id, a.name,
           a.sex, a.year, a.month, a.day, a.x, a.y, a.z, tot / 3, tot);
}

int main() {
    int n;
    scanf("%d", &n);

    struct student Stu[n];
    for (int i = 0; i < n; i++) {
        struct student stu = InputSingle();
        Stu[i] = stu;
    }

    int target_id;
    scanf("%d", &target_id);

    int targ_loc = -1;
    for (int i = 0; i < n; i++) {
        if (Stu[i].id == target_id) {
            targ_loc = i;
            break;
        }
    }

    if (targ_loc == -1) {
        printf("Failed\n");
        return 1;
    }

    OutputSingle(Stu[targ_loc]);
    return 0;
}
