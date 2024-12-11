#include <stdio.h>

int ehQuadrado(int b, int h) {
    return (b == h);
}

int main() {
    int b, h;
    scanf("%d %d", &b, &h);

    int r = ehQuadrado(b, h);
    printf("%d\n", r);

    return 0;
}
