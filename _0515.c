#include <stdio.h>
#include <string.h>

#define LEN 100

struct Stu {
    int id;
    char name[LEN];
    char gender[3];
    double sc_math;
    double sc_eng;
    double sc_prog;
    double sc_avg;
    double tot;
};

void print_stu(struct Stu *stu) {
    printf("%05d %s %s %.2lf %.2lf %.2lf %.2lf %.2lf\n", stu->id, stu->name,
           stu->gender, stu->sc_math, stu->sc_eng, stu->sc_prog, stu->sc_avg,
           stu->tot);
}

int main() {
    struct Stu stu;

    scanf("%d %s %s %lf %lf %lf", &stu.id, &stu.name, &stu.gender, &stu.sc_math,
          &stu.sc_eng, &stu.sc_prog);

    stu.tot = (stu.sc_math + stu.sc_eng + stu.sc_prog);
    stu.sc_avg = stu.tot / 3;

    print_stu(&stu);

    return 0;
}