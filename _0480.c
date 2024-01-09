#include <stdio.h>
#include <string.h>

#define LEN 100

struct Stu {
    char name[LEN];
    double m_base;
    double m_rand;
    double m_award;
    double m_tot;
};

void print_stu(struct Stu *stu) {
    printf("%s %.2lf\n", stu->name, stu->m_award + stu->m_rand + stu->m_base);
}

struct Stu *bubble_sort(struct Stu arr[], int len) {
    int i, j;

    for (i = 0; i < len - 1; i++) {
        for (j = 0; j < len - 1 - i; j++) {
            if (arr[j].m_tot > arr[j + 1].m_tot) {
                char name[LEN];
                double m_base;
                double m_rand;
                double m_award;
                double m_tot;

                m_tot = arr[j].m_tot;
                arr[j].m_tot = arr[j + 1].m_tot;
                arr[j + 1].m_tot = m_tot;

                strcpy(name, arr[j].name);
                strcpy(arr[j].name, arr[j + 1].name);
                strcpy(arr[j + 1].name, name);

                m_award = arr[j].m_award;
                arr[j].m_award = arr[j + 1].m_award;
                arr[j + 1].m_award = m_award;

                m_rand = arr[j].m_rand;
                arr[j].m_rand = arr[j + 1].m_rand;
                arr[j + 1].m_rand = m_rand;

                m_base = arr[j].m_base;
                arr[j].m_base = arr[j + 1].m_base;
                arr[j + 1].m_base = m_base;
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

        scanf("%s %lf %lf %lf", &stu.name, &stu.m_base, &stu.m_rand,
              &stu.m_award);

        stu.m_tot = (stu.m_base + stu.m_rand + stu.m_award);

        stus[i] = stu;
    }

    bubble_sort(stus, n);

    for (int i = 0; i < n; i++) {
        print_stu(&stus[n - i - 1]);
    }

    return 0;
}