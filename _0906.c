#include <stdio.h>
#include <string.h>

#define LEN 100

struct Stu {
    int id;
    char name[LEN];
    double sc_math;
    double sc_eng;
    double sc_prog;
    double sc_avg;
};

void print_stu(struct Stu *stu) {
    printf("%05d %s %.2lf %.2lf %.2lf %.2lf\n", stu->id, stu->name,
           stu->sc_math, stu->sc_eng, stu->sc_prog, stu->sc_avg);
}

struct Stu *bubble_sort(struct Stu arr[], int len) {
    int i, j;

    for (i = 0; i < len - 1; i++) {
        for (j = 0; j < len - 1 - i; j++) {
            if (arr[j].sc_avg > arr[j + 1].sc_avg) {
                int id;
                char name[LEN];
                double sc_math;
                double sc_eng;
                double sc_prog;
                double sc_avg;

                sc_avg = arr[j].sc_avg;
                arr[j].sc_avg = arr[j + 1].sc_avg;
                arr[j + 1].sc_avg = sc_avg;

                strcpy(name, arr[j].name);
                strcpy(arr[j].name, arr[j + 1].name);
                strcpy(arr[j + 1].name, name);

                sc_math = arr[j].sc_math;
                arr[j].sc_math = arr[j + 1].sc_math;
                arr[j + 1].sc_math = sc_math;

                sc_eng = arr[j].sc_eng;
                arr[j].sc_eng = arr[j + 1].sc_eng;
                arr[j + 1].sc_eng = sc_eng;

                sc_prog = arr[j].sc_prog;
                arr[j].sc_prog = arr[j + 1].sc_prog;
                arr[j + 1].sc_prog = sc_prog;

                id = arr[j].id;
                arr[j].id = arr[j + 1].id;
                arr[j + 1].id = id;
            }
        }
    }
    return arr;
}

int main() {
    int n;
    scanf("%d", &n);

    struct Stu stus[n];

    for (int i = 0; i < n; i++) {
        struct Stu stu;

        scanf("%d %s %lf %lf %lf", &stu.id, &stu.name, &stu.sc_math,
              &stu.sc_eng, &stu.sc_prog);

        stu.sc_avg = (stu.sc_math + stu.sc_eng + stu.sc_prog) / 3;

        stus[i] = stu;
    }

    bubble_sort(stus, n);

    print_stu(&stus[n - 1]);

    return 0;
}