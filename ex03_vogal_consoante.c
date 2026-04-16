#include <stdio.h>
#include <ctype.h>

int main() {
    char letra;
    printf("Digite uma letra: ");
    scanf(" %c", &letra);
    letra = tolower(letra);

    if (letra == 'a' || letra == 'e' || letra == 'i' || letra == 'o' || letra == 'u') {
        printf("E uma vogal.\n");
    } else if ((letra >= 'a' && letra <= 'z')) {
        printf("E uma consoante.\n");
    } else {
        printf("Nao e uma letra valida.\n");
    }
    return 0;
}