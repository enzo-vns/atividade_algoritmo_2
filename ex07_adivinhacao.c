#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int sorteado, tentativa, cont = 0;
    srand(time(NULL));
    sorteado = rand() % 101;

    do {
        printf("Tente acertar o numero (0-100): ");
        scanf("%d", &tentativa);
        cont++;

        if (tentativa < sorteado) printf("Maior!\n");
        else if (tentativa > sorteado) printf("Menor!\n");
        
    } while (tentativa != sorteado);

    printf("Acertou! Tentativas: %d\n", cont);
    return 0;
}