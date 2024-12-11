#include <stdio.h>

int somarMenorComMaior(int v[3]) {
    int menor = v[0], maior = v[0];

    for (int i = 1; i < 3; i++) {
        if (v[i] < menor) {
            menor = v[i];
        } else if (v[i] > maior) {
            maior = v[i];
        }
    }

    return (menor + maior);
}

int main() {
    int v[3];

    for (int i = 0; i < 3; i++) {
        scanf("%d", &v[i]);
    }

    int r = somarMenorComMaior(v);
    printf("%d\n", r);

    return 0;
}
