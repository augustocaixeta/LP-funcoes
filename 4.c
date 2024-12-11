#include <stdio.h>

int contarPares(int v[3]) {
    int c = 0;

    for (int i = 0; i < 3; i++) {
        if (v[i] % 2 == 0) {
            c++;
        }
    }

    return c;
}

int main() {
    int v[3];

    for (int i = 0; i < 3; i++) {
        scanf("%d", &v[i]);
    }

    int r = contarPares(v);
    printf("%d\n", r);

    return 0;
}
