#include <stdio.h>

float calcularJuros(float c, int m, float t) {
    return (c * m * t);
}

int main() {
    float c, t;
    int m;
    scanf("%f %d %f", &c, &m, &t);

    t /= 100.0;

    float r = calcularJuros(c, m, t);
    printf("%.2f\n", r);

    return 0;
}
