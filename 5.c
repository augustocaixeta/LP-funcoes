#include <stdio.h>

double somaPA(double a1, double an, int n) {
    return (n * (a1 + an) / 2.0);
}

int main() {
    double a1, an;
    int n;
    scanf("%lf %lf %d", &a1, &an, &n);

    double r = somaPA(a1, an, n);
    printf("%.2lf\n", r);

    return 0;
}
