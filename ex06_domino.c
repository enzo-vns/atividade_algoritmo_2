#include <stdio.h>

int main() {
    int soma = 0;
    // Pecas com 4: (4,0), (4,1), (4,2), (4,3), (4,4), (4,5), (4,6)
    for(int i = 0; i <= 6; i++) {
        soma += 4; 
    }
    soma += 4; // Adiciona o segundo lado da peca (4,4)
    
    printf("A soma de todos os numeros 4 nas pecas de domino e: %d\n", soma);
    return 0;
}