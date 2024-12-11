#include <stdio.h>

void imprimir(int n) {
    for (int i = 1; i <= n; i++) {
        printf("%d", i);

        if (i < n) {
            printf(" ");
        }
    }

    printf("\n");
}

int main() {
    int n;
    scanf("%d", &n);

    imprimir(n);

    return 0;
}
