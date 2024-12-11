#include <stdio.h>

void imprimirDivisores(int n) {
    for (int i = 1; i <= n; i++) {
        if (n % i == 0) {
            printf("%d", i);

            if (i < n) {
                printf(" ");
            }
        }
    }

    printf("\n");
}

int main() {
    int n;
    scanf("%d", &n);

    imprimirDivisores(n);

    return 0;
}
