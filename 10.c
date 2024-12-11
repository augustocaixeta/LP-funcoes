#include <stdio.h>

int somaParesCompreendidos(int a, int b) {
    int s = 0;

    if (a > b) {
        int t = a;
        a = b;
        b = t;
    }

    for (int n = a; n <= b; n++) {
        if (n % 2 == 0) {
            s += n;
        }
    }

    return s;
}

int main() {
    int a, b;
    scanf("%d %d", &a, &b);

    int r = somaParesCompreendidos(a, b);
    printf("%d\n", r);

    return 0;
}
