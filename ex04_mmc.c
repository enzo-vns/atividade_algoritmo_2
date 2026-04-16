#include <stdio.h>

int main() {
    int a, b, maior;
    printf("Digite dois numeros: ");
    scanf("%d %d", &a, &b);

    maior = (a > b) ? a : b;

    while (1) {
        if (maior % a == 0 && maior % b == 0) {
            printf("O MMC de %d e %d e: %d\n", a, b, maior);
            break;
        }
        maior++;
    }
    return 0;
}