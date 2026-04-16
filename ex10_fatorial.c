#include <stdio.h>

int main() {
    int n, i;
    unsigned long long fat = 1;
    printf("Digite um numero inteiro: ");
    scanf("%d", &n);

    if (n < 0) printf("Nao existe fatorial de numero negativo.\n");
    else {
        for (i = 1; i <= n; i++) {
            fat *= i;
        }
        printf("%d! = %llu\n", n, fat);
    }
    return 0;
}