#include <stdio.h>

int delta(int a, int b, int c) {
    return (b * b - 4 * a * c);
}

int main() {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

    int r = delta(a, b, c);
    printf("%d\n", r);

    return 0;
}
