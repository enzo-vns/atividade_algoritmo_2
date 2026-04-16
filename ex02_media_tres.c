#include <stdio.h>

int main() {
    int n1, n2, n3;
    float media;
    printf("Digite tres numeros inteiros: ");
    scanf("%d %d %d", &n1, &n2, &n3);

    media = (n1 + n2 + n3) / 3.0;

    printf("A media e: %.2f\n", media);
    return 0;
}