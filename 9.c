#include <stdio.h>
#include <math.h>

int delta(int a, int b, int c) {
    return (b * b - 4 * a * c);
}

void calcularRaizes(int d, int a, int b, int c, double *r1, double *r2) {
    if (d > 0) {
        *r1 = (-b + sqrt(d)) / (2 * a);
        *r2 = (-b - sqrt(d)) / (2 * a);
    } else if (d == 0) {
        *r1 = *r2 = -b / (2 * a);
    }
}

int main() {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

    int d = delta(a, b, c);

    if (d < 0) {
        printf("Nao existem raizes.\n");
        return 0;
    }

    double r1, r2;
    calcularRaizes(d, a, b, c, &r1, &r2);

    if (d > 0) {
        printf("%.2lf %.2lf\n", r1, r2);
    } else {
        printf("%.2lf\n", r1);
    }

    return 0;
}
